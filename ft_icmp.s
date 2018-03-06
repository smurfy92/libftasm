global _ft_icmp

section .text
	global _ft_icmp

_ft_icmp:
	sub rdi, rsi
	mov rax, rdi
	ret