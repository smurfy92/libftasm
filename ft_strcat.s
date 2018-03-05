global _ft_strcat

extern _ft_strlen

section .text

_ft_strcat:
	call _ft_strlen
	mov rcx, 0

loop:
	cmp byte[rsi+rcx], 0x0
	jz end
	mov r8, [rsi+rcx]
	mov [rdi+rax], r8
	inc rcx
	inc rax
	jmp loop

end:
	mov r8, 0
	mov [rdi+rax], r8
	mov rax, rdi
	ret