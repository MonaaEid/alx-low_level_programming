section .data
	hello db 'Hello, Holberton', 0
section .text
	global _start
_start:
	push rbp
	mov rbp. rsp
	lea rdi, [rel hello]
	xor eax, eax
	pop rbp
	ret
