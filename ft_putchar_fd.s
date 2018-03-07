%define SYSCALL(n) 0x2000000 | n

global _ft_putchar_fd

section .text

_ft_putchar_fd:
	push rbp
	mov rbp, rsp	
	add rsp, 16
	mov rdx, 1
	mov [rsp], rdi
	mov rdi, rsi
	mov rsi, rsp
	mov rax, SYSCALL(4)
	syscall
	leave
	ret