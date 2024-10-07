/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psevilla <psevilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:59:36 by psevilla          #+#    #+#             */
/*   Updated: 2024/10/07 16:59:39 by psevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	count_words(char const *s, char c)
{
	int	in_word;
	int	j;

	in_word = 0;
	j = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			j++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (j);
}

static char	*str_creator(char const *s, int start, int end)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	while (start < end)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

static void	free_memory(char **str, int word)
{
	while (word--)
		free(str[word]);
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		word;

	i = 0;
	word = 0;
	str = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i;
			while (s[j] && s[j] != c)
				j++;
			str[word++] = str_creator(s, i, j);
			if (!str[word - 1])
			{
				free_memory(str, word - 1);
				return (NULL);
			}
			i = j;
		}
		else
			i++;
	}
	str[word] = NULL;
	return (str);
}
