/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psevilla <psevilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:29:08 by psevilla          #+#    #+#             */
/*   Updated: 2024/09/24 18:29:10 by psevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	if (d < s)
		return (ft_memcpy(d, s, n));
	else if (d > s)
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}

/* int	main(void)
{
	char	dest1[20];
	char	dest2[20];
	char	*src;
	size_t	n;

	src = "Hola caracola";
	n = 5;
	ft_memmove(dest1, src, n);
	printf("%s\n", dest1);
	memmove(dest2, src, n);
	printf("%s", dest2);
	return (0);
} */
