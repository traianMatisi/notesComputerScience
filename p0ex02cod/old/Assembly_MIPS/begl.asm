.data
	opQ: .asciiz "Digite um número inteiro: "
	zeroD: .double 0.0
	maior: .asciiz "O número é positivo (maior que 0)"
	menor: .asciiz "O número é negativo (menor que 0)"
	igual: .asciiz "O número digitado é 0"
.text
	li $v0, 4 
	la $a0, opQ
	syscall #print string opQ
	li $v0, 7
	syscall #prompt for double
	lwc1 $f2, zeroD #build $zero.D
	add.d $f12, $f0, $f2
	bne $f12, $f2, notEqual #compare zeroD in $f2 with prompt moved to $f12
	li $v0, 4
	la $a0, igual
	syscall	#print if equal
	li $v0, 10
	syscall	#finish if equal
	notEqual:
	bgt $f12, $f2, positive
	li $v0, 4
	la $a0, menor
	syscall	
	li $v0, 10
	syscall
	positive:
	li $v0, 4
	la $a0, maior
	syscall