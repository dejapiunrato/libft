/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psevilla <psevilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:10:39 by psevilla          #+#    #+#             */
/*   Updated: 2024/09/27 17:10:44 by psevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*sub;

	i = 0;
	sub = malloc(len + 1);
	if (!s || !sub)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (len--)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}

int	main(void)
{
	char	*s;

	s = "Hola Caracola";
	printf("%s", ft_substr(s, 0, 22));
}
