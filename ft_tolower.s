global _ft_tolower

section .text
	global _ft_tolower

_ft_tolower:
	cmp rdi, 65
	js end
	cmp rdi, 91
	js add
	jmp end

add:
	add rdi, 32

end:
	mov rax, rdi
	ret
