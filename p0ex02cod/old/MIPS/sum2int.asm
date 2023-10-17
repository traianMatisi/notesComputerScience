.data
	ask1: .asciiz "Digite o primeiro número: --> "
	ask2: .asciiz "Digite o segundo número: --> "
	ans: .asciiz "A soma vale "
.text
	li $v0, 4
	la $a0, ask1 # Digite o primeiro número
	syscall
	
	li $v0, 5 # prompt primeiro número
	syscall
	add $t0, $t0, $v0 # $t0 <-- prompt 1
	
	li $v0, 4
	la $a0, ask2 # Digite o segundo número
	syscall
	
	li $v0, 5 # prompt segundo número
	syscall
	add $t0, $t0, $v0 # $t0 <-- prompt 1 + prompt 2
	
	li $v0, 4 # A soma vale
	la $a0, ans
	syscall
	
	li $v0, 1 # print integer
	add $a0, $zero, $t0
	syscall # print answer