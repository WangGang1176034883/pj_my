	.text
	.file	"page119_3_2.c"
	.globl	decode                          // -- Begin function decode
	.p2align	2
	.type	decode,@function
decode:                                 // @decode
	.cfi_startproc
// %bb.0:
	sub	sp, sp, #48
	.cfi_def_cfa_offset 48
	str	x0, [sp, #40]
	str	x1, [sp, #32]
	str	x2, [sp, #24]
	ldr	x8, [sp, #40]
	ldr	w8, [x8]
	str	w8, [sp, #20]
	ldr	x8, [sp, #32]
	ldr	w8, [x8]
	str	w8, [sp, #16]
	ldr	x8, [sp, #24]
	ldr	w8, [x8]
	str	w8, [sp, #12]
	ldr	w8, [sp, #20]
	ldr	x9, [sp, #32]
	str	w8, [x9]
	ldr	w8, [sp, #16]
	ldr	x9, [sp, #24]
	str	w8, [x9]
	ldr	w8, [sp, #12]
	ldr	x9, [sp, #40]
	str	w8, [x9]
	add	sp, sp, #48
	.cfi_def_cfa_offset 0
	ret
.Lfunc_end0:
	.size	decode, .Lfunc_end0-decode
	.cfi_endproc
                                        // -- End function
	.globl	main                            // -- Begin function main
	.p2align	2
	.type	main,@function
main:                                   // @main
	.cfi_startproc
// %bb.0:
	sub	sp, sp, #32
	.cfi_def_cfa_offset 32
	stp	x29, x30, [sp, #16]             // 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	sub	x0, x29, #4
	mov	w8, #3
	stur	w8, [x29, #-4]
	add	x1, sp, #8
	mov	w8, #4
	str	w8, [sp, #8]
	add	x2, sp, #4
	mov	w8, #5
	str	w8, [sp, #4]
	bl	decode
	ldur	w1, [x29, #-4]
	ldr	w2, [sp, #8]
	ldr	w3, [sp, #4]
	adrp	x0, .L.str
	add	x0, x0, :lo12:.L.str
	bl	printf
	mov	w0, wzr
	.cfi_def_cfa wsp, 32
	ldp	x29, x30, [sp, #16]             // 16-byte Folded Reload
	add	sp, sp, #32
	.cfi_def_cfa_offset 0
	.cfi_restore w30
	.cfi_restore w29
	ret
.Lfunc_end1:
	.size	main, .Lfunc_end1-main
	.cfi_endproc
                                        // -- End function
	.type	.L.str,@object                  // @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"x:%d y:%d z:%d\n"
	.size	.L.str, 16

	.ident	"clang version 15.0.3"
	.section	".note.GNU-stack","",@progbits
