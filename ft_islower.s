global _ft_islower

section .text

_ft_islower:
	cmp rdi, 97
	js no
	cmp rdi, 123
	js yes

no:
	mov rax, 0
	ret

yes:
	mov rax, 1
	ret