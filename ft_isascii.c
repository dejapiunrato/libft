/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psevilla <psevilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:59:42 by psevilla          #+#    #+#             */
/*   Updated: 2024/09/19 18:59:44 by psevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/* int	main(void)
{
	int i = 0;
	printf("%d\n", ft_isascii(i));
	printf("%d", isascii(i));
	return (0);
} */
