global _ft_isprint

section .text
	global _ft_isprint

_ft_isprint:
	cmp rdi, 32
	js no
	cmp rdi, 127
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
