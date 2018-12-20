	.syntax unified
	.cpu cortex-m0
	.fpu softvfp
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 6
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.thumb
	.syntax unified
	.file	"i2c.c"
	.text
.Ltext0:
	.section	.text.caribou_i2c_reset,"ax",%progbits
	.align	2
	.global	caribou_i2c_reset
	.code	16
	.thumb_func
	.type	caribou_i2c_reset, %function
caribou_i2c_reset:
.LFB32:
	.file 1 "/home/mike/Documents/GitHub/caribou-rtos/caribou/target/board/nucleo_f030/crossworks/../../../../src/dev/i2c.c"
	.loc 1 19 0
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{r7, lr}
.LCFI0:
	sub	sp, sp, #8
.LCFI1:
	add	r7, sp, #0
.LCFI2:
	str	r0, [r7, #4]
	.loc 1 20 0
	ldr	r3, [r7, #4]
	ldr	r3, [r3]
	movs	r0, r3
	bl	chip_i2c_reset
	movs	r3, r0
	.loc 1 21 0
	movs	r0, r3
	mov	sp, r7
	add	sp, sp, #8
	@ sp needed
	pop	{r7, pc}
.LFE32:
	.size	caribou_i2c_reset, .-caribou_i2c_reset
	.section	.text.caribou_i2c_tx,"ax",%progbits
	.align	2
	.global	caribou_i2c_tx
	.code	16
	.thumb_func
	.type	caribou_i2c_tx, %function
caribou_i2c_tx:
.LFB33:
	.loc 1 32 0
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{r7, lr}
.LCFI3:
	sub	sp, sp, #16
.LCFI4:
	add	r7, sp, #0
.LCFI5:
	str	r0, [r7, #12]
	str	r1, [r7, #8]
	adds	r3, r7, #7
	strb	r2, [r3]
	.loc 1 33 0
	ldr	r3, [r7, #12]
	ldr	r0, [r3]
	ldr	r3, [r7, #12]
	ldrb	r1, [r3, #4]
	adds	r3, r7, #7
	ldrb	r3, [r3]
	ldr	r2, [r7, #8]
	bl	chip_i2c_tx
	movs	r3, r0
	.loc 1 34 0
	movs	r0, r3
	mov	sp, r7
	add	sp, sp, #16
	@ sp needed
	pop	{r7, pc}
.LFE33:
	.size	caribou_i2c_tx, .-caribou_i2c_tx
	.section	.text.caribou_i2c_rx,"ax",%progbits
	.align	2
	.global	caribou_i2c_rx
	.code	16
	.thumb_func
	.type	caribou_i2c_rx, %function
caribou_i2c_rx:
.LFB34:
	.loc 1 45 0
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{r7, lr}
.LCFI6:
	sub	sp, sp, #16
.LCFI7:
	add	r7, sp, #0
.LCFI8:
	str	r0, [r7, #12]
	str	r1, [r7, #8]
	adds	r3, r7, #7
	strb	r2, [r3]
	.loc 1 46 0
	ldr	r3, [r7, #12]
	ldr	r0, [r3]
	ldr	r3, [r7, #12]
	ldrb	r1, [r3, #4]
	adds	r3, r7, #7
	ldrb	r3, [r3]
	ldr	r2, [r7, #8]
	bl	chip_i2c_rx
	movs	r3, r0
	.loc 1 47 0
	movs	r0, r3
	mov	sp, r7
	add	sp, sp, #16
	@ sp needed
	pop	{r7, pc}
.LFE34:
	.size	caribou_i2c_rx, .-caribou_i2c_rx
	.section	.debug_frame,"",%progbits
.Lframe0:
	.4byte	.LECIE0-.LSCIE0
.LSCIE0:
	.4byte	0xffffffff
	.byte	0x3
	.ascii	"\000"
	.uleb128 0x1
	.sleb128 -4
	.uleb128 0xe
	.byte	0xc
	.uleb128 0xd
	.uleb128 0
	.align	2
.LECIE0:
.LSFDE0:
	.4byte	.LEFDE0-.LASFDE0
.LASFDE0:
	.4byte	.Lframe0
	.4byte	.LFB32
	.4byte	.LFE32-.LFB32
	.byte	0x4
	.4byte	.LCFI0-.LFB32
	.byte	0xe
	.uleb128 0x8
	.byte	0x87
	.uleb128 0x2
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI1-.LCFI0
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.4byte	.LCFI2-.LCFI1
	.byte	0xd
	.uleb128 0x7
	.align	2
.LEFDE0:
.LSFDE2:
	.4byte	.LEFDE2-.LASFDE2
.LASFDE2:
	.4byte	.Lframe0
	.4byte	.LFB33
	.4byte	.LFE33-.LFB33
	.byte	0x4
	.4byte	.LCFI3-.LFB33
	.byte	0xe
	.uleb128 0x8
	.byte	0x87
	.uleb128 0x2
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI4-.LCFI3
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.4byte	.LCFI5-.LCFI4
	.byte	0xd
	.uleb128 0x7
	.align	2
.LEFDE2:
.LSFDE4:
	.4byte	.LEFDE4-.LASFDE4
.LASFDE4:
	.4byte	.Lframe0
	.4byte	.LFB34
	.4byte	.LFE34-.LFB34
	.byte	0x4
	.4byte	.LCFI6-.LFB34
	.byte	0xe
	.uleb128 0x8
	.byte	0x87
	.uleb128 0x2
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI7-.LCFI6
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.4byte	.LCFI8-.LCFI7
	.byte	0xd
	.uleb128 0x7
	.align	2
.LEFDE4:
	.text
.Letext0:
	.file 2 "/usr/share/crossworks_for_arm_3.7/include/stdint.h"
	.file 3 "../../../chip/stm32/stm32f030/lib/CMSIS/ST/STM32F0xx/Include/stm32f0xx.h"
	.file 4 "../../../../include/caribou/dev/i2c.h"
	.section	.debug_info,"",%progbits
.Ldebug_info0:
	.4byte	0x219
	.2byte	0x4
	.4byte	.Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.4byte	.LASF27
	.byte	0xc
	.4byte	.LASF28
	.4byte	.LASF29
	.4byte	.Ldebug_ranges0+0
	.4byte	0
	.4byte	.Ldebug_line0
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.4byte	.LASF0
	.uleb128 0x3
	.4byte	.LASF4
	.byte	0x2
	.byte	0xf
	.4byte	0x37
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.4byte	.LASF1
	.uleb128 0x2
	.byte	0x2
	.byte	0x5
	.4byte	.LASF2
	.uleb128 0x2
	.byte	0x2
	.byte	0x7
	.4byte	.LASF3
	.uleb128 0x4
	.byte	0x4
	.byte	0x5
	.ascii	"int\000"
	.uleb128 0x3
	.4byte	.LASF5
	.byte	0x2
	.byte	0x17
	.4byte	0x5e
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	.LASF6
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.4byte	.LASF7
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.4byte	.LASF8
	.uleb128 0x2
	.byte	0x4
	.byte	0x5
	.4byte	.LASF9
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.4byte	.LASF10
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	.LASF11
	.uleb128 0x5
	.4byte	0x53
	.uleb128 0x6
	.byte	0x2c
	.byte	0x3
	.2byte	0x1ae
	.4byte	0x126
	.uleb128 0x7
	.ascii	"CR1\000"
	.byte	0x3
	.2byte	0x1b0
	.4byte	0x88
	.byte	0
	.uleb128 0x7
	.ascii	"CR2\000"
	.byte	0x3
	.2byte	0x1b1
	.4byte	0x88
	.byte	0x4
	.uleb128 0x8
	.4byte	.LASF12
	.byte	0x3
	.2byte	0x1b2
	.4byte	0x88
	.byte	0x8
	.uleb128 0x8
	.4byte	.LASF13
	.byte	0x3
	.2byte	0x1b3
	.4byte	0x88
	.byte	0xc
	.uleb128 0x8
	.4byte	.LASF14
	.byte	0x3
	.2byte	0x1b4
	.4byte	0x88
	.byte	0x10
	.uleb128 0x8
	.4byte	.LASF15
	.byte	0x3
	.2byte	0x1b5
	.4byte	0x88
	.byte	0x14
	.uleb128 0x7
	.ascii	"ISR\000"
	.byte	0x3
	.2byte	0x1b6
	.4byte	0x88
	.byte	0x18
	.uleb128 0x7
	.ascii	"ICR\000"
	.byte	0x3
	.2byte	0x1b7
	.4byte	0x88
	.byte	0x1c
	.uleb128 0x8
	.4byte	.LASF16
	.byte	0x3
	.2byte	0x1b8
	.4byte	0x88
	.byte	0x20
	.uleb128 0x8
	.4byte	.LASF17
	.byte	0x3
	.2byte	0x1b9
	.4byte	0x88
	.byte	0x24
	.uleb128 0x8
	.4byte	.LASF18
	.byte	0x3
	.2byte	0x1ba
	.4byte	0x88
	.byte	0x28
	.byte	0
	.uleb128 0x9
	.4byte	.LASF19
	.byte	0x3
	.2byte	0x1bb
	.4byte	0x8d
	.uleb128 0xa
	.byte	0x8
	.byte	0x4
	.byte	0x1a
	.4byte	0x153
	.uleb128 0xb
	.4byte	.LASF20
	.byte	0x4
	.byte	0x1c
	.4byte	0x153
	.byte	0
	.uleb128 0xb
	.4byte	.LASF21
	.byte	0x4
	.byte	0x1d
	.4byte	0x2c
	.byte	0x4
	.byte	0
	.uleb128 0xc
	.byte	0x4
	.4byte	0x126
	.uleb128 0x3
	.4byte	.LASF22
	.byte	0x4
	.byte	0x1e
	.4byte	0x132
	.uleb128 0xd
	.4byte	.LASF23
	.byte	0x1
	.byte	0x12
	.4byte	0x4c
	.4byte	.LFB32
	.4byte	.LFE32-.LFB32
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x18c
	.uleb128 0xe
	.ascii	"i2c\000"
	.byte	0x1
	.byte	0x12
	.4byte	0x18c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.byte	0
	.uleb128 0xc
	.byte	0x4
	.4byte	0x159
	.uleb128 0xd
	.4byte	.LASF24
	.byte	0x1
	.byte	0x1f
	.4byte	0x4c
	.4byte	.LFB33
	.4byte	.LFE33-.LFB33
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1d6
	.uleb128 0xe
	.ascii	"i2c\000"
	.byte	0x1
	.byte	0x1f
	.4byte	0x18c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0xf
	.4byte	.LASF25
	.byte	0x1
	.byte	0x1f
	.4byte	0x1d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.uleb128 0xf
	.4byte	.LASF26
	.byte	0x1
	.byte	0x1f
	.4byte	0x2c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0xc
	.byte	0x4
	.4byte	0x2c
	.uleb128 0x10
	.4byte	.LASF30
	.byte	0x1
	.byte	0x2c
	.4byte	0x4c
	.4byte	.LFB34
	.4byte	.LFE34-.LFB34
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xe
	.ascii	"i2c\000"
	.byte	0x1
	.byte	0x2c
	.4byte	0x18c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0xf
	.4byte	.LASF25
	.byte	0x1
	.byte	0x2c
	.4byte	0x1d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.uleb128 0xf
	.4byte	.LASF26
	.byte	0x1
	.byte	0x2c
	.4byte	0x2c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.byte	0
	.section	.debug_abbrev,"",%progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x10
	.uleb128 0x17
	.uleb128 0x2134
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x35
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x13
	.byte	0x1
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x13
	.byte	0x1
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_pubnames,"",%progbits
	.4byte	0x4a
	.2byte	0x2
	.4byte	.Ldebug_info0
	.4byte	0x21d
	.4byte	0x164
	.ascii	"caribou_i2c_reset\000"
	.4byte	0x192
	.ascii	"caribou_i2c_tx\000"
	.4byte	0x1dc
	.ascii	"caribou_i2c_rx\000"
	.4byte	0
	.section	.debug_pubtypes,"",%progbits
	.4byte	0xf9
	.2byte	0x2
	.4byte	.Ldebug_info0
	.4byte	0x21d
	.4byte	0x25
	.ascii	"signed char\000"
	.4byte	0x37
	.ascii	"unsigned char\000"
	.4byte	0x2c
	.ascii	"uint8_t\000"
	.4byte	0x3e
	.ascii	"short int\000"
	.4byte	0x45
	.ascii	"short unsigned int\000"
	.4byte	0x4c
	.ascii	"int\000"
	.4byte	0x5e
	.ascii	"unsigned int\000"
	.4byte	0x53
	.ascii	"uint32_t\000"
	.4byte	0x65
	.ascii	"long long int\000"
	.4byte	0x6c
	.ascii	"long long unsigned int\000"
	.4byte	0x73
	.ascii	"long int\000"
	.4byte	0x7a
	.ascii	"char\000"
	.4byte	0x81
	.ascii	"sizetype\000"
	.4byte	0x126
	.ascii	"I2C_TypeDef\000"
	.4byte	0x159
	.ascii	"caribou_i2c_t\000"
	.4byte	0
	.section	.debug_aranges,"",%progbits
	.4byte	0x2c
	.2byte	0x2
	.4byte	.Ldebug_info0
	.byte	0x4
	.byte	0
	.2byte	0
	.2byte	0
	.4byte	.LFB32
	.4byte	.LFE32-.LFB32
	.4byte	.LFB33
	.4byte	.LFE33-.LFB33
	.4byte	.LFB34
	.4byte	.LFE34-.LFB34
	.4byte	0
	.4byte	0
	.section	.debug_ranges,"",%progbits
.Ldebug_ranges0:
	.4byte	.LFB32
	.4byte	.LFE32
	.4byte	.LFB33
	.4byte	.LFE33
	.4byte	.LFB34
	.4byte	.LFE34
	.4byte	0
	.4byte	0
	.section	.debug_line,"",%progbits
.Ldebug_line0:
	.section	.debug_str,"MS",%progbits,1
.LASF30:
	.ascii	"caribou_i2c_rx\000"
.LASF24:
	.ascii	"caribou_i2c_tx\000"
.LASF28:
	.ascii	"/home/mike/Documents/GitHub/caribou-rtos/caribou/ta"
	.ascii	"rget/board/nucleo_f030/crossworks/../../../../src/d"
	.ascii	"ev/i2c.c\000"
.LASF14:
	.ascii	"TIMINGR\000"
.LASF27:
	.ascii	"GNU C99 5.4.1 20160609 (release) [ARM/embedded-5-br"
	.ascii	"anch revision 237715] -fmessage-length=0 -mtp=soft "
	.ascii	"-mcpu=cortex-m0 -mlittle-endian -mfloat-abi=soft -m"
	.ascii	"thumb -fmerge-all-constants -g2 -gpubnames -std=gnu"
	.ascii	"99 -fno-dwarf2-cfi-asm -fno-builtin -ffunction-sect"
	.ascii	"ions -fdata-sections -fshort-double -fshort-enums -"
	.ascii	"fno-common\000"
.LASF25:
	.ascii	"data\000"
.LASF1:
	.ascii	"unsigned char\000"
.LASF18:
	.ascii	"TXDR\000"
.LASF16:
	.ascii	"PECR\000"
.LASF3:
	.ascii	"short unsigned int\000"
.LASF12:
	.ascii	"OAR1\000"
.LASF13:
	.ascii	"OAR2\000"
.LASF29:
	.ascii	"/home/mike/Documents/GitHub/caribou-rtos/caribou/ta"
	.ascii	"rget/board/nucleo_f030/crossworks\000"
.LASF15:
	.ascii	"TIMEOUTR\000"
.LASF6:
	.ascii	"unsigned int\000"
.LASF8:
	.ascii	"long long unsigned int\000"
.LASF4:
	.ascii	"uint8_t\000"
.LASF11:
	.ascii	"sizetype\000"
.LASF7:
	.ascii	"long long int\000"
.LASF10:
	.ascii	"char\000"
.LASF20:
	.ascii	"port\000"
.LASF2:
	.ascii	"short int\000"
.LASF21:
	.ascii	"device_address\000"
.LASF5:
	.ascii	"uint32_t\000"
.LASF9:
	.ascii	"long int\000"
.LASF22:
	.ascii	"caribou_i2c_t\000"
.LASF17:
	.ascii	"RXDR\000"
.LASF0:
	.ascii	"signed char\000"
.LASF19:
	.ascii	"I2C_TypeDef\000"
.LASF26:
	.ascii	"length\000"
.LASF23:
	.ascii	"caribou_i2c_reset\000"
	.ident	"GCC: (GNU) 5.4.1 20160609 (release) [ARM/embedded-5-branch revision 237715]"
