.text
	li $v0, 5
	syscall
	move $t0, $v0
	blt $t0, $zero, NG
	bne $t0, $zero, PS
	li $t1, 3
	j Exit
		NG:
		li $t1, -1
		j Exit
		PS:
		li $t1, 1
	Exit: