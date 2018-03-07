#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void ft_putstr(char *c);
int ft_isalpha(char c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
void ft_bzero(char *str, size_t n);
char *ft_strcat(char *s1, char *s2);
int ft_strlen(char *s1);
void *ft_memcpy(char *s1, char *s2, size_t n);
char *ft_strdup(char *s1);
void *ft_memset(void *b, int c, size_t len);
int  ft_icmp(int a, int b);
void  ft_putchar(char c);
int ft_isupper(char c);
int ft_islower(char c);


void	test_isalpha()
{
	int i = -1;
	int err = 0;

	while (++i < 128)
	{
		if (ft_isalpha(i) != isalpha(i))
		{
			printf("\033[31merror on ft_isalpha at char -> %c\033[0m\n", i);
			err = 1;
		}
	}
	if (!err)
		printf("\033[92m ft_isalpha is ok \033[0m\n");
}

void	test_toupper()
{
	int i = -1;
	int err = 0;

	while (++i < 128)
	{
		if (ft_toupper(i) != toupper(i))
		{
			printf("\033[31merror on ft_toupper at char -> %c\033[0m\n", i);
			err = 1;
		}
	}
	if (!err)
		printf("\033[92m ft_toupper is ok \033[0m\n");
}

void	test_tolower()
{
	int i = -1;
	int err = 0;

	while (++i < 128)
	{
		if (ft_tolower(i) != tolower(i))
		{
			printf("\033[31merror on ft_tolower at char -> %c\033[0m\n", i);
			err = 1;
		}
	}
	if (!err)
		printf("\033[92m ft_tolower is ok \033[0m\n");
}

void	test_isdigit()
{
	int i = -1;
	int err = 0;

	while (++i < 128)
	{
		if (ft_isdigit(i) != isdigit(i))
		{
			printf("\033[31merror on ft_isdigit at char -> %c\033[0m\n", i);
			err = 1;
		}
	}
	if (!err)
		printf("\033[92m ft_isdigit is ok \033[0m\n");
}

void	test_isascii()
{
	int i = -1;
	int err = 0;

	while (++i < 128)
	{
		if (ft_isascii(i) != isascii(i))
		{
			printf("\033[31merror on ft_isascii at char -> %c\033[0m\n", i);
			err = 1;
		}
	}
	if (!err)
		printf("\033[92m ft_isascii is ok \033[0m\n");
}

void	test_isalnum()
{
	int i = -1;
	int err = 0;

	while (++i < 128)
	{
		if (ft_isalnum(i) != isalnum(i))
		{
			printf("\033[31merror on ft_isalnum at char -> %c\033[0m\n", i);
			err = 1;
		}
	}
	if (!err)
		printf("\033[92m ft_isalnum is ok \033[0m\n");
}

void	test_isprint()
{
	int i = -1;
	int err = 0;

	while (++i < 128)
	{
		if (ft_isprint(i) != isprint(i))
		{
			printf("\033[31merror on ft_isprint at char -> %c\033[0m\n", i);
			err = 1;
		}
	}
	if (!err)
		printf("\033[92m ft_isprint is ok \033[0m\n");
}

void test_memcpy (void)
{
	char	memc1[10]	= "123456789";
	char	memc2[5]	= "abcd";

	ft_memcpy(memc1, memc2, 3);
	if (memc1[0] == memc2[0] && memc1[1] == memc2[1] && memc1[2] == memc2[2])
		printf("\033[92m ft_memcpy is ok \033[0m\n");
	else
		printf("\033[31merror on ft_memcpy\033[0m\n");
}

void test_icmp(void)
{
	if (ft_icmp(7, 5) == 2)
		printf("\033[92m ft_icmp is ok\033[0m\n");
	else
		printf("\033[31merror on ft_icmp\033[0m\n");
}

void test_ft_putchar(void)
{
	char str[] = "\033[92m ft_putchar is ok \033[0m\n";
	int i = -1;
	while (++i < strlen(str))
		ft_putchar(str[i]);
}

void test_ft_isupper(void)
{
	int i = -1;
	int err = 0;

	while (++i < 128)
	{
		if ((i < 65 && ft_isupper(i) == 1) || (i > 90 && ft_isupper(i) == 1) || (i <= 90 && i >= 65 && ft_isupper(i) == 0))
		{
			printf("\033[31merror on ft_isupper at char -> %c\033[0m\n", i);
			err = 1;
		}
	}
	if (!err)
		printf("\033[92m ft_isupper is ok \033[0m\n");
}

void test_ft_islower(void)
{
	int i = -1;
	int err = 0;

	while (++i < 128)
	{
		if ((i < 97 && ft_islower(i) == 1) || (i > 122 && ft_islower(i) == 1) || (i <= 97 && i >= 122 && ft_islower(i) == 0))
		{
			printf("\033[31merror on ft_islower at char -> %c\033[0m\n", i);
			err = 1;
		}
	}
	if (!err)
		printf("\033[92m ft_islower is ok \033[0m\n");
}

void test_ft_bzero(void)
{
	char *str = strdup("totowefewefwe");
	char *str2 = strdup("totowefewefwe");
	int len = ft_strlen("totowefewefwe");
	int i = -1;;
	int err = 0;

	bzero(str , 3);
	ft_bzero(str2 , 3);
	while (++i < len)
	{
		if (str[i] != str2[i])
		{
			printf("\033[31merror on ft_bzero at i -> %d char->  %c\033[0m\n", i, str[i]);
			err = 1;
		}
	}
	if (!err)
		printf("\033[92m ft_bzero is ok \033[0m\n");

}

int	main(void){
	test_ft_putchar();
	test_isalpha();
	test_toupper();
	test_tolower();
	test_isdigit();
	test_isascii();
	test_isalnum();
	test_isprint();
	test_memcpy();
	test_icmp();
	test_ft_isupper();
	test_ft_islower();
	test_ft_bzero();
	return 0;
}