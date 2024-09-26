/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psevilla <psevilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:48:58 by psevilla          #+#    #+#             */
/*   Updated: 2024/09/24 19:49:00 by psevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (n <= i)
		return (i + j);
	j = 0;
	while (dest[j] && i < n - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}
