.data
	msg: .asciiz "Type an integer number:	"
	even: .asciiz "The number is even."
	odd: .asciiz "The number is odd."
.text
	li $t9, 2 # $t9 = 2
	
	li $v0, 4 # print string
	la $a0, msg
	syscall
	
	li $v0, 5 # prompt integer
	syscall
	
	div $v0, $t9 # prompt/2
	mfhi $t0
	
	beq $t0, $zero, EVEN
	
	li $v0, 4 # print string
	la $a0, odd
	syscall
	
	li $v0, 10
	syscall
	
	EVEN:
		li $v0, 4
		la $a0, even
		syscall