#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *s)
{
	int			i;
	int			neg;
	long int	num;

	i = 0;
	neg = 1;
	num = 0;
	if (s[0] == '+' || s[0] == ' ' || (s[0] >= '\t' && s[0] <= '\r'))
		i++;
	else if (s[0] == '-')
	{
		i++;
		neg = -neg;
	} else if (!(s[0] >= '0' && s[0] <= '9'))
		return (0);
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return ((int)(num * neg));
}

/* int	main(void)
{
	const char 	*test[] = {
		"1234",
		"-1234",
		"	1234",
		"+1234",
		"abc1234",
		"1234abc",
		"2147483648",
		"-2147483648",
		"-99999999999",
		"--1234"
	};
	const char	*sep;
	int			i;

	sep = "==============================\n";
	i = 0;

	printf("        TESTS FT_ATOI    \n");
	while (i < sizeof(test) / sizeof(test[1]))
	{
		printf("%s\n", sep);
		printf("Test %d: %s\n", i + 1, test[i]);
		printf("atoi:		%d\n", atoi(test[i]));
		printf("ft_atoi:	%d\n\n", ft_atoi(test[i]));
		i++;
	}

} */