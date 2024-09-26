/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psevilla <psevilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:28:55 by psevilla          #+#    #+#             */
/*   Updated: 2024/09/19 19:30:21 by psevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isprint(int c)
{
	return ((c < 0 || c > 31) && (c != 127));
}

/* int	main(void)
{
	int i = 0;

	while (i <= 127)
	{
		if (ft_isprint(i) == 0 && isprint(i) != 0)
			printf("%d", i);
		i++;
	}
	if (i == 128)
		printf("Todo correcto");
	return (0);
} */
