global _ft_strcat

extern _ft_strlen

section .text

_ft_strcat:
	push rdi ; sauvegarde de l'adresse rdi
	push rbx ; sauvegarde de rbx
	mov rbx, rdi ; on copie rdi dans rbx
	call _ft_strlen
	mov r9, rax
	mov rdi, rsi ; on mets rsi dans rdi pour recupere la len
	call _ft_strlen
	mov rdi, rbx
	add rdi, r9
	mov rcx ,rax
	add rcx, 1
	cld
	repnz movsb
	pop rbx
	pop rax
	ret