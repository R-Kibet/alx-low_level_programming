;TEXT SECTION

SECTION .text
	global main
	extern printf
main:
	mov edi, len	;count
	mov esi, msg	;*buf
	mov eax, 0	;system call (sys_write)
	call printf	;call print

	mov eax, 0	;system call (sys_exit)
	ret     	;interupt

;DATA SECTION

SECTION .data
	msg: db "Hello, Holberton", 0 		;u can also use 10
	len: db "%s", 0xa, 0			;message length

