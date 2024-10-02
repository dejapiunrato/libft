#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*ptr;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]))
		j--;
	str = malloc(sizeof(char) * (j - i + 1));
	ptr = str;
	if (!str || i >= j)
		return (NULL);
	while (i < j)
		*str++ = s1[i++];
	str[j + 1] = '\0';
	return (ptr);
}