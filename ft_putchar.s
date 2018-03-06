%define SYSCALL(n) 0x2000000 | n

global _ft_putchar

section .text

_ft_putchar:
	push rbp
	mov rbp, rsp	
	add rsp, 16
	mov rdx, 1
	mov [rsp], rdi
	mov rsi, rsp
	mov rdi, 1
	mov rax, SYSCALL(4)
	syscall
	leave
	ret