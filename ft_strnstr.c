/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psevilla <psevilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:38:21 by psevilla          #+#    #+#             */
/*   Updated: 2024/09/27 16:38:22 by psevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;
	const char	*ptr;

	ptr = s1;
	j = 0;
	if (*s2 == 0)
		return ((char *)s1);
	while (j < n && *ptr)
	{
		i = 0;
		if (*ptr == s2[i])
		{
			while (ptr[i] == s2[i] && s2[i])
				i++;
			if (s2[i] == 0)
				return ((char *)ptr);
		}
		ptr++;
		j++;
	}
	return (NULL);
}
