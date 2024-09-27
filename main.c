#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

#define COLOR_RESET   "\033[0m"
#define RED     "\033[0;31m"
#define GREEN   "\033[0;32m"
#define YELLOW  "\033[0;33m"
#define BLUE    "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN    "\033[0;36m"
#define WHITE   "\033[0;37m"

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
			printf("Entrada -------> %d\n", test[i]);
			printf("isalpha ------->" RED " %d\n" COLOR_RESET, isalpha(test[i]));
			printf("ft_isalpha ---->" RED " %d\n\n" COLOR_RESET, ft_isalpha(test[i]));
		}
		i++;
	}
}

int main(void)
{
	char *sep;

	sep = "========================================\n";

	// ft_isalpha
	printf(MAGENTA "Test: isalpha\n\n" COLOR_RESET);
	test_isalpha();
	printf("%s", sep);
	return (0);
}
