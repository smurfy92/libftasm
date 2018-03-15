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
void  ft_putchar_fd(char c, int fd);
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
		if (ft_islower(i) != islower(i))
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
	int len = strlen("totowefewefwe");
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

void	test_ft_memset(void)
{
	char *str = strdup("totowefewefwe");
	char *str2 = strdup("totowefewefwe");
	int len = strlen("totowefewefwe");

	memset(str, 'c', 4);
	ft_memset(str2, 'c', 4);

	if (strcmp(str, str2) != 0)
		printf("\033[31merror on ft_memset at str -> %s str2->  %s\033[0m\n",str, str2);
	else
		printf("\033[92m ft_memset is ok \033[0m\n");
}

void	test_ft_strdup(void)
{
	char *str = strdup("toto\n");
	char *str2 = ft_strdup("toto\n");

	if (strcmp(str, str2) != 0)
		printf("\033[31merror on ft_strdup at str -> %s str2->  %s\033[0m\n",str, str2);
	else
		printf("\033[92m ft_strdup is ok \033[0m\n");
}

void	test_ft_putchar_fd(void)
{
	ft_putchar_fd('2', 2);
	ft_putchar_fd('\n', 2);
}

void	test_ft_strlen(void)
{
	int a = strlen("42");
	int b = ft_strlen("42");
	if (a != b)
		printf("\033[31merror on ft_strlen\n");
	else
		printf("\033[92m ft_strlen is ok \033[0m\n");
}

void test_ft_strcat(void)
{
	char *str = strdup("coucou");
	char *str2 = strdup("fewfw");
	char *str3 = strdup("coucou");
	char *str4 = strdup("fewfw");
	int e = 0;
	int len = -1;

	str = strcat(str, str2);
	str3 = ft_strcat(str3, str4);
	if (strcmp(str3, str) != 0)
		printf("\033[31merror on ft_strcat\n");
	else
		printf("\033[92m ft_strcat is ok \033[0m\n");
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
	test_ft_memset();
	test_ft_strdup();
	test_ft_putchar_fd();
	test_ft_strlen();
	test_ft_strcat();
	return 0;
}