global main
extern printf

section .data
msg db 'Hello, Holberton', 10, 0

section .text
main:
push rbp
mov rbp, rsp

mov edi, msg
mov eax, 0
call printf

mov rsp, rbp
pop rbp
xor eax, eax
ret
