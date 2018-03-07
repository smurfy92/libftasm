global _ft_isupper

section .text

_ft_isupper:
	cmp rdi, 65
	js no
	cmp rdi, 91
	js yes

no:
	mov rax, 0
	ret

yes:
	mov rax, 1
	ret