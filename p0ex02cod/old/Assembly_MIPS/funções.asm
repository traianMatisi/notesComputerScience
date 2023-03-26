.data
	msg: .asciiz "Digite um número:\t"
	impar: .asciiz "É impar"
	par: .asciiz "É par"
.text
	.main:
		li $v0, 4
		la $a0, msg
		syscall
		li $v0, 5
		syscall
		jal ODD_EVEN
		j EXIT
	ODD_EVEN:
		addi $t0, $t0, 2
		div $v0, $t0
		mfhi $v0
		beq $v0, $zero PAR
		li $v0, 4
		la $a0, impar
		syscall
		jr $ra
	PAR:
		li $v0, 4
		la $a0, par
		syscall
		jr $ra
	EXIT:
		li $v0, 10
		syscall