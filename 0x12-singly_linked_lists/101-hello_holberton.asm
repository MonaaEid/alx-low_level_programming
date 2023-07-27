extern printf

section .text
global main

main:
push rbp

section .data
    hello db 'Hello, Holberton', 0xA, 0
section .text
    global _start
    extern printf
_start:
    push rbp
    mov rbp, rsp
    lea rdi, [rel hello]
    xor eax, eax
    call printf
    xor eax, eax
    pop rbp
    ret
