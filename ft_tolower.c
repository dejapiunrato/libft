/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psevilla <psevilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 20:22:09 by psevilla          #+#    #+#             */
/*   Updated: 2024/09/24 20:22:11 by psevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c > 40 && c < 91)
		c = c + 32;
	return (c);
}

/* int main(void)
{
	int c;

	c = 0;
	while (c < 127)
	{
		printf("%c", ft_tolower(c));
		c++;
	}
	return (0);
}  */
