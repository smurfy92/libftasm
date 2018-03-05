global _ft_strlen

section .text

_ft_strlen:
	mov al, 0
	mov rcx, 0
	mov rax, 0
	jmp loop

loop:
	cmp byte[rdi+rcx], 0x0
	je end
	inc rax
	inc rcx
	jmp loop

end:
	ret