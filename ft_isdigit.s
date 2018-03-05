global _ft_isdigit

section .text
	global _ft_isdigit

_ft_isdigit:
	cmp rdi, 48
	js no
	cmp rdi, 58
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
