#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <ctype.h>

#define COLOR_RESET	"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[0;33m"
#define BLUE		"\033[0;34m"
#define MAGENTA		"\033[0;35m"
#define CYAN		"\033[0;36m"
#define WHITE		"\033[0;37m"
#define SEP			printf(CYAN "%s" COLOR_RESET, sep);

void	test_isalpha(void)
{
	int		test[] = {'A', 'Z', 'a', 'z', '\n', '9', '['};
	int		i;
	size_t	size;

	i = 0;
	size = sizeof(test)/sizeof(test[0]);

	while (size--)
	{
		printf("TEST: %d", i + 1);
		if (ft_isalpha(test[i]) == isalpha(test[i]) || (ft_isalpha(test[i]) == 1 && isalpha(test[i]) == 1024))
		{
			printf(GREEN " [OK]\n" COLOR_RESET);
		}
		else
		{
			printf(RED "[ERROR]\n" COLOR_RESET);
			printf("Entrada -------> %c\n", (char)test[i]);
			printf("isalpha ------->" RED " %d\n" COLOR_RESET, isalpha(test[i]));
			printf("ft_isalpha ---->" RED " %d\n\n" COLOR_RESET, ft_isalpha(test[i]));
		}
		i++;
	}
}

void	test_isdigit(void)
{
	int		test[] = {'0', '9', '3', 'z', '\n', 'G', '['};
	int		i;
	size_t	size;

	i = 0;
	size = sizeof(test)/sizeof(test[0]);

	while (size--)
	{
		printf("TEST: %d", i + 1);
		if (ft_isdigit(test[i]) == isdigit(test[i]) || (ft_isdigit(test[i]) == 1 && isdigit(test[i]) == 2048))
		{
			printf(GREEN " [OK]\n" COLOR_RESET);
		}
		else
		{
			printf(RED "[ERROR]\n" COLOR_RESET);
			printf("Entrada -------> %c\n", (char)test[i]);
			printf("isdigit ------->" RED " %d\n" COLOR_RESET, isdigit(test[i]));
			printf("ft_isdigit ---->" RED " %d\n\n" COLOR_RESET, ft_isdigit(test[i]));
		}
		i++;
	}
}

void	test_isalnum(void)
{
	int		test[] = {'0', '9', '3', 'z', '\n', 'G', '['};
	int		i;
	size_t	size;

	i = 0;
	size = sizeof(test)/sizeof(test[0]);

	while (size--)
	{
		printf("TEST: %d", i + 1);
		if (ft_isalnum(test[i]) == isalnum(test[i]) || (ft_isalnum(test[i]) == 1 && isalnum(test[i]) == 8))
		{
			printf(GREEN " [OK]\n" COLOR_RESET);
		}
		else
		{
			printf(RED "[ERROR]\n" COLOR_RESET);
			printf("Entrada -------> %c\n", (char)test[i]);
			printf("isdigit ------->" RED " %d\n" COLOR_RESET, isalnum(test[i]));
			printf("ft_isdigit ---->" RED " %d\n\n" COLOR_RESET, ft_isalnum(test[i]));
		}
		i++;
	}
}

void	test_isascii(void)
{
	int		test[] = {0, '9', 94, '\t', 128, 127, 300};
	int		i;
	size_t	size;

	i = 0;
	size = sizeof(test)/sizeof(test[0]);

	while (size--)
	{
		printf("TEST: %d", i + 1);
		if (ft_isascii(test[i]) == isascii(test[i]))
		{
			printf(GREEN " [OK]\n" COLOR_RESET);
		}
		else
		{
			printf(RED "[ERROR]\n" COLOR_RESET);
			printf("Entrada -------> %c\n", (char)test[i]);
			printf("isdigit ------->" RED " %d\n" COLOR_RESET, isascii(test[i]));
			printf("ft_isdigit ---->" RED " %d\n\n" COLOR_RESET, ft_isascii(test[i]));
		}
		i++;
	}
}

void	test_isprint(void)
{
	int		test[] = {0, '9', 94, '\t', '\0', '\r', ' '};
	int		i;
	size_t	size;

	i = 0;
	size = sizeof(test)/sizeof(test[0]);

	while (size--)
	{
		printf("TEST: %d", i + 1);
		if (ft_isprint(test[i]) == isprint(test[i]) || (ft_isprint(test[i]) == 1 && isprint(test[i]) == 16384))
		{
			printf(GREEN " [OK]\n" COLOR_RESET);
		}
		else
		{
			printf(RED "[ERROR]\n" COLOR_RESET);
			printf("Entrada -------> %c\n", (char)test[i]);
			printf("isdigit ------->" RED " %d\n" COLOR_RESET, isprint(test[i]));
			printf("ft_isdigit ---->" RED " %d\n\n" COLOR_RESET, ft_isprint(test[i]));
		}
		i++;
	}
}

void	test_strlen(void)
{
	const char	*test[] = {
		"Hola Caracola", 
		"espeto", 
		"Viva el vino", 
		"mapaches", 
		"", 
		"roedor"
	};
	int			i;
	size_t		size;

	i = 0;
	size = sizeof(test)/sizeof(test[0]);

	while (size--)
	{
		printf("TEST: %d", i + 1);
		if (ft_strlen(test[i]) == strlen(test[i]))
		{
			printf(GREEN " [OK]\n" COLOR_RESET);
		}
		else
		{
			printf(RED "[ERROR]\n" COLOR_RESET);
			printf("Entrada -------> %s\n", test[i]);
			printf("strlen -------->" RED " %lu\n" COLOR_RESET, strlen(test[i]));
			printf("ft_strlen ----->" RED " %lu\n\n" COLOR_RESET, ft_strlen(test[i]));
		}
		i++;
	}
}

void	test_memset(void)
{
	char	*test1 = strdup("Hola caracola");
	char	*test2 = strdup("la cerámica de talavera no es cosa menor, dicho de otra manera, es cosa mayor");
	char	*test3 = strdup("chao pescao");
	char	*test4 = strdup("chachi pistachi");
	char	*test5 = strdup("viva el vino, otra vez");
	char	*test[] = {test1, test2, test3, test4, test5};
	size_t	n[] = {13, 3, 5, 2, 6};
	int		c[] = {'\t', 'X', '*', '\0', 'L'};
	int		i = 0;
	size_t	size;

	size = sizeof(test)/sizeof(test[0]);

	while (size--)
	{
		printf("TEST: %d", i + 1);
		char	*cpy1 = strdup(test[i]);
		char	*cpy2 = strdup(test[i]);

		memset(cpy1, c[i], n[i]);
		ft_memset(cpy2, c[i], n[i]);
		if (memcmp(cpy1, cpy2, n[i]) == 0)
		{
			printf(GREEN " [OK]\n" COLOR_RESET);
		}
		else
		{
			printf(RED "[ERROR]\n" COLOR_RESET);
			printf("Entrada -------> %s | %c | %zu\n", test[i], (char)c[i], n[i]);
			printf("memset -------->" RED " %s\n" COLOR_RESET, cpy1);
			printf("ft_memset ----->" RED " %s\n\n" COLOR_RESET, cpy2);	
		}
		free(cpy1);
		free(cpy2);
		i++;
	}
}

int main(void)
{
	char *sep;

	sep = "\n==================\n\n";

 	// ft_isalpha
	printf(MAGENTA "\nTest: isalpha\n\n" COLOR_RESET);
	test_isalpha();
	SEP;

	// ft_isdigit
	printf(MAGENTA "Test: isdigit\n\n" COLOR_RESET);
	test_isdigit();
	SEP;

	//ft_isalnum
	printf(MAGENTA "Test: isalnum\n\n" COLOR_RESET);
	test_isalnum();
	SEP;

	//ft_isascii
	printf(MAGENTA "Test: isascii\n\n" COLOR_RESET);
	test_isascii();
	SEP;

	//ft_isprint
	printf(MAGENTA "Test: isprint\n\n" COLOR_RESET);
	test_isprint();
	SEP;

	//ft_strlen
	printf(MAGENTA "Test: strlen\n\n" COLOR_RESET);
	test_strlen();
	SEP;

	//ft_memset
	printf(MAGENTA "Test: memset\n\n" COLOR_RESET);
	test_memset();
	SEP;

	return (0);
}
