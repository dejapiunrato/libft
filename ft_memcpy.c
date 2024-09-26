/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psevilla <psevilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:19:43 by psevilla          #+#    #+#             */
/*   Updated: 2024/09/24 17:19:45 by psevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dest);
}

/* int	main(void)
{
	char *src;
	char dest1[50];
	char dest2[50];
	size_t n;

	src = "Hola caracola";
	n = 10;
	ft_memcpy(dest1, src, n);
	dest1[n] = '\0';
	ft_memcpy(dest2, src, n);
	dest2[n] = '\0';
	printf("%s\n", dest1);
	printf("%s", dest2);
	return (0);
} */
