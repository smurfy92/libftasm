global _ft_isascii

section .text
	global _ft_isascii

_ft_isascii:
	cmp rdi, 0
	js no
	cmp rdi, 128
	js yes
	jmp no

no:
	mov rax, 0
	jmp end

yes:
	mov rax, 1
	jmp end

end:
	ret
