	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 12, 0	sdk_version 13, 1
	.globl	_binarysearch                   ## -- Begin function binarysearch
	.p2align	4, 0x90
_binarysearch:                          ## @binarysearch
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -16(%rbp)
	movl	%esi, -20(%rbp)
	movl	%edx, -24(%rbp)
	movl	$0, -28(%rbp)
	movl	-20(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -32(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movl	-28(%rbp), %eax
	cmpl	-32(%rbp), %eax
	je	LBB0_9
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movl	-28(%rbp), %eax
	addl	-32(%rbp), %eax
	movl	$2, %ecx
	cltd
	idivl	%ecx
	movl	%eax, -36(%rbp)
	movq	-16(%rbp), %rax
	movslq	-36(%rbp), %rcx
	movl	(%rax,%rcx,4), %eax
	cmpl	-24(%rbp), %eax
	jne	LBB0_4
## %bb.3:
	movl	-36(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	LBB0_16
LBB0_4:                                 ##   in Loop: Header=BB0_1 Depth=1
	movq	-16(%rbp), %rax
	movslq	-36(%rbp), %rcx
	movl	(%rax,%rcx,4), %eax
	cmpl	-24(%rbp), %eax
	jge	LBB0_6
## %bb.5:                               ##   in Loop: Header=BB0_1 Depth=1
	movl	-36(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -28(%rbp)
	jmp	LBB0_7
LBB0_6:                                 ##   in Loop: Header=BB0_1 Depth=1
	movl	-36(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -32(%rbp)
LBB0_7:                                 ##   in Loop: Header=BB0_1 Depth=1
	jmp	LBB0_8
LBB0_8:                                 ##   in Loop: Header=BB0_1 Depth=1
	jmp	LBB0_1
LBB0_9:
	movl	-28(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jne	LBB0_12
## %bb.10:
	movq	-16(%rbp), %rax
	movslq	-28(%rbp), %rcx
	movl	(%rax,%rcx,4), %eax
	cmpl	-24(%rbp), %eax
	jne	LBB0_12
## %bb.11:
	movl	-28(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	LBB0_16
LBB0_12:
	movl	-28(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jne	LBB0_15
## %bb.13:
	movq	-16(%rbp), %rax
	movslq	-32(%rbp), %rcx
	movl	(%rax,%rcx,4), %eax
	cmpl	-24(%rbp), %eax
	jne	LBB0_15
## %bb.14:
	movl	-32(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	LBB0_16
LBB0_15:
	movl	$-1, -4(%rbp)
LBB0_16:
	movl	-4(%rbp), %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	leaq	-48(%rbp), %rdi
	leaq	l___const.main.inputarray(%rip), %rsi
	movl	$40, %edx
	callq	_memcpy
	movl	$10, -56(%rbp)
	leaq	-48(%rbp), %rdi
	movl	-56(%rbp), %esi
	movl	$3, %edx
	callq	_binarysearch
	leaq	-48(%rbp), %rdi
	movl	-56(%rbp), %esi
	movl	$7, %edx
	callq	_binarysearch
	leaq	-48(%rbp), %rdi
	movl	-56(%rbp), %esi
	movl	$10, %edx
	callq	_binarysearch
	leaq	-48(%rbp), %rdi
	movl	-56(%rbp), %esi
	xorl	%edx, %edx
	callq	_binarysearch
	leaq	-48(%rbp), %rdi
	movl	-56(%rbp), %esi
	movl	$5, %edx
	callq	_binarysearch
	leaq	-48(%rbp), %rdi
	movl	-56(%rbp), %esi
	movl	$33454, %edx                    ## imm = 0x82AE
	callq	_binarysearch
	movl	-56(%rbp), %esi
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	-48(%rbp), %rdi
	movl	-56(%rbp), %esi
	movl	$3, %edx
	callq	_binarysearch
	movl	%eax, %esi
	leaq	L_.str.1(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	-48(%rbp), %rdi
	movl	-56(%rbp), %esi
	movl	$7, %edx
	callq	_binarysearch
	movl	%eax, %esi
	leaq	L_.str.1(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	-48(%rbp), %rdi
	movl	-56(%rbp), %esi
	movl	$10, %edx
	callq	_binarysearch
	movl	%eax, %esi
	leaq	L_.str.1(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	-48(%rbp), %rdi
	movl	-56(%rbp), %esi
	xorl	%edx, %edx
	callq	_binarysearch
	movl	%eax, %esi
	leaq	L_.str.1(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	-48(%rbp), %rdi
	movl	-56(%rbp), %esi
	movl	$5, %edx
	callq	_binarysearch
	movl	%eax, %esi
	leaq	L_.str.1(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	-48(%rbp), %rdi
	movl	-56(%rbp), %esi
	movl	$33454, %edx                    ## imm = 0x82AE
	callq	_binarysearch
	movl	%eax, %esi
	leaq	L_.str.1(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rcx
	cmpq	%rcx, %rax
	jne	LBB1_2
## %bb.1:
	xorl	%eax, %eax
	addq	$64, %rsp
	popq	%rbp
	retq
LBB1_2:
	callq	___stack_chk_fail
	ud2
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__const
	.p2align	4                               ## @__const.main.inputarray
l___const.main.inputarray:
	.long	1                               ## 0x1
	.long	2                               ## 0x2
	.long	3                               ## 0x3
	.long	4                               ## 0x4
	.long	5                               ## 0x5
	.long	6                               ## 0x6
	.long	7                               ## 0x7
	.long	8                               ## 0x8
	.long	9                               ## 0x9
	.long	10                              ## 0xa

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Number of elements: %d\n"

L_.str.1:                               ## @.str.1
	.asciz	"The returned value is: %d\n"

.subsections_via_symbols
