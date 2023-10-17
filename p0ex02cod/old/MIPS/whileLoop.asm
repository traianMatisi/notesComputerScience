.text
	li $t0, 1
	li $t1, 10
	whl:
	beq $t0, $t1, fns
	addi $t0, $t0, 1
	j whl
	fns: