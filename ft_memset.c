/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psevilla <psevilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:28:06 by psevilla          #+#    #+#             */
/*   Updated: 2024/09/24 18:28:08 by psevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	i;

	tmp = s;
	i = c;
	while (n--)
		*(tmp++) = i;
	return (s);
}

/* int		main(void)
{
	char	s1[50];
	char	s2[50];
	int		c;
	size_t	n1;
	size_t	n2;
	int		i;

	c = 'A';
	n1 = sizeof(s1);
	n2 = sizeof(s2);
	ft_memset(s1, c, n1);
	memset(s2, c, n2);
	i = 0;
	while (n1--)
	{
		printf("%c", s1[i]);
		i++;
	}
	i = 0;
	printf("\n");
	while (n2--)
	{
		printf("%c", s2[i]);
		i++;
	}
} */
