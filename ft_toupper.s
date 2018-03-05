global _ft_toupper

section .text
	global _ft_toupper

_ft_toupper:
	cmp rdi, 97
	js end
	cmp rdi, 123
	js sub
	jmp end

sub:
	sub rdi, 32

end:
	mov rax, rdi
	ret
