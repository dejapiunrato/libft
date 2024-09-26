/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psevilla <psevilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 20:36:11 by psevilla          #+#    #+#             */
/*   Updated: 2024/09/24 20:36:13 by psevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	const char	*ptr;

	ptr = NULL;
	while (*str)
	{
		if (*str == c)
			ptr = str;
		str++;
	}
	return ((char *)ptr);
}
