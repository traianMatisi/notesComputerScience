.data
	msg: .word 32
	
.text
	li $v0, 1
	lw $a0, msg
	syscall