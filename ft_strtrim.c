#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j] && ft_strchr(set, s1[j - 1]))
		j--;
	if (i <= j)
		return (ft_strdup(""));
	str = malloc(j - i + 1);
	if (!str)
		return (NULL);
	while (j-- != 0)
		*str++ = s1[i++];
	*str = '\0';
	return (str);
}