.data
	msg: .asciiz "Digite um número:	"
	par: .asciiz "O número é par"
	impar: .asciiz "O número é impar"
.text
	li $v0, 4 # print string
	la $a0, msg
	syscall # Digite um número:
	li $v0, 5 # prompt integer
	syscall # prompt
	move $t1, $v0 # salva o prompt
	li $t0, 2 # load 2 in $t2
	div $t1, $t0 # $t1/2
	mfhi $t0 # mod $t1, 2
	beq $t0, $zero, even # if mod $t1/2 = 0, par
	li $v0, 4 # print string impar
	la $a0, impar
	syscall	# o número é impar
	j exit
	even:
		li $v0, 4 # print string
		la $a0, par
		syscall # o número é par
		j exit
	exit:
		li $v0, 10
		syscall # end program