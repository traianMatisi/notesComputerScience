.data
	msg: .asciiz "Digite um número para realizarmos uma contagem: --> "
	no: .asciiz "No numbers to count"
	space: .asciiz "\n\n"
.text
	.main:
		li $v0, 4 # print string
		la $a0, msg
		syscall
		li $v0, 5 # prompt integer
		syscall
		add $t1, $v0, $zero # prompt move
		add $t0, $zero, $zero # counter init
		slt $t9, $zero, $t1 # if $t1 (prompt) > zero, count, else, dont
		beq $t9, $zero, NO_COUNT
	LOOP:
		li $v0, 1 # print integer
		add $a0, $t0, $zero # print counter
		syscall
		li $v0, 4 # print string
		la $a0, space # print new lines
		syscall
		addi $t0, $t0, 1 # i = i + 1
		slt $t2, $t1, $t0 # if $t1 < $t0 (prompt < counter), EXIT
		beq $t2, $zero, LOOP # we could invert logic of branch, jump and labels
		j EXIT
	NO_COUNT:
		li $v0, 4
		la $a0, no
		syscall
		j EXIT
	EXIT:
		li $v0, 10
		syscall