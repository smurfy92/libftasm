global _ft_strcat

extern _ft_strlen

section .text

_ft_strcat:
	push rdi
	call _ft_strlen
	mov r9, rax
	rep mov byte[rdi + r9 + rcx], byte[rsi + rcx]
	pop rax
	ret