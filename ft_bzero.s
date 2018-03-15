global _ft_bzero

section .text
	global _ft_bzero

_ft_bzero:
	mov r9, 0
	mov r10, rsi
	cmp r9, r10
	js loop
	ret

loop:
	mov r8b , 0
	mov [rdi+r9], r8b
	add r9 , 1
	cmp r9, r10
	js loop
	ret