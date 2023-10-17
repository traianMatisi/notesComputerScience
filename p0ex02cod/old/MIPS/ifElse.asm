.data
	msg: .asciiz "Type a integer number:	"
	plus: .asciiz "The number is bigger than zero (positive)"
	less: .asciiz "The number is lesser than zero (negative)"
	zero: .asciiz "The number is exactly zero"
.text
	li $v0, 4
	la $a0, msg
	syscall
	li $v0, 5
	syscall
	slt $t0, $v0, $zero
	bne $t0, $zero, NEGATIVE
	bne $v0, $zero, POSITIVE
	li $v0, 4
	la $a0, zero
	syscall
	j EXIT
	NEGATIVE:
		li $v0, 4
		la $a0, less
		syscall
		j EXIT
	POSITIVE:
		li $v0, 4
		la $a0, plus
		syscall
		j EXIT
	EXIT:
		li $v0, 10
		syscall