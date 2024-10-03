#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	str_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

static char	*special(int n)
{
	char	*str;

	if (n == 0)
	{
		str = ft_strdup("0");
	}
	if (n == -2147483648)
	{
		str = ft_strdup("-2147483648");
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		i;

	len = str_len(n);
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	i = 0;
	if (n == 0 || n == -2147483648)
		return (special(n));
	if (n < 0)
	{
		str[i++] = '-';
		n = -n;
	}
	str[len - 1] = '\0';
	len -= 1;
	while (len > i)
	{
		str[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (str);
}
