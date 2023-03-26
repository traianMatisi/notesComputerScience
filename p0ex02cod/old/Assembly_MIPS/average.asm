.data
	array1:
		.align 2 # word alignment
		.space 28 # 7 words alloc (4bytes * 7words = 28bytes)
	msg1: .asciiz "Digite o "
	msg2: .asciiz "o número: --> "
.text
	add $t0, $zero, $zero # contador
	addi $t1, $zero, 7 # limite
	add $t2, $zero, $zero # indexador
	
	WHILE:
		beq $t0, $t1, EXIT # se contador = limite, EXIT
		
		li $v0, 4
		la $a0, msg1
		syscall # print "Digite o "
		
		li $v0, 1
		addi $a0, $t0, 1
		syscall # print $contador
		
		li $v0, 4
		la $a0, msg2
		syscall # print "o número: --> "
		
		li $v0, 5
		syscall # prompt array1[n]
		
		sw $v0, 0()
		
		
		j WHILE
	EXIT:
		li $v0, 10
		syscall
