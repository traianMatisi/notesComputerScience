.data
	i: .word 0
.text
	li $t0, 10
	lw $t1, i
	WHILE:
		slt $t2, $t1, $t0
		beq $t2, $zero, EXIT
		addi $t1, $t1, 1
		j WHILE
	EXIT: