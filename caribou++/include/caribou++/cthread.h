/******************************************************************************
* Copyright © 2005-2012 by Pike Aerospace Research Corporation
* All Rights Reserved
*
*   This file is part of CARIBOU RTOS
*
*   CARIBOU RTOS is free software: you can redistribute it and/or modify
*   it under the terms of the Beerware License Version 43.
*
* ----------------------------------------------------------------------------
* "THE BEER-WARE LICENSE" (Revision 43):
* <mike@pikeaero.com> wrote this file. As long as you retain this notice you
* can do whatever you want with this stuff. If we meet some day, and you think
* this stuff is worth it, you can buy me a beer in return ~ Mike Sharkey
* ----------------------------------------------------------------------------
******************************************************************************/
#ifndef _CARIBOU_CTHREAD_H_
#define _CARIBOU_CTHREAD_H_

#include <caribou++/cobject.h>
#include <caribou++/cstring.h>

namespace CARIBOU
{
	class CThread : public CObject
	{
		public:
			CThread( caribou_thread_t* );
			CThread( const char* name, uint16_t stksize=CARIBOU_THREAD_DEF_STKSZ, uint16_t priority=CARIBOU_THREAD_NORMALPRIO );
			virtual ~CThread();

			virtual void				run()=0;
			virtual void				start()	{mStarted=true;}

			bool						started()	{return mStarted;}
			bool						finished()	{return !mStarted;}
			void						finish()	{mStarted=false;}

			void						setName(const char* name);
			char*						name();
			uint64_t					runtime();
			uint32_t					stacksize();
			uint32_t					stackusage();
			int16_t						priority();
			uint16_t					state();
			CString						status();
			virtual	void				wakeup();
			caribou_thread_t*			id()		{return mThread;}
			caribou_thread_t*			parentId()	{return caribou_thread_parent(mThread);}

			static int					count()		{return mThreads.count();}
			static CThread*				at(int n)	{return mThreads.at(n);}
			static CThread*				current();
			static CThread*				find(char* name);
			static CList<CThread*>&		threads()	{return mThreads;}
			static void					yield();

			/* system timer methods */
			static caribou_tick_t		timerTicks();
			static bool					timerTimeout(caribou_tick_t start, caribou_tick_t timeout);
			static int					timerPeriod();
			//static double				elapsed();

		protected:
					void				setWatchdogHandle(uint8_t handle)	{mWatchdogHandle=handle;}
					uint8_t				watchdogHandle()					{return mWatchdogHandle;}
			virtual	void				lock();
			virtual	void				unlock();
			virtual	void				sleep(int msec=-1);

		private:
			static CList<CThread*>		mThreads;
			caribou_thread_t*			mThread;
			CByteArray					mPrivateStack;
			bool						mStarted;
			uint8_t						mWatchdogHandle;
	};

}


#endif
