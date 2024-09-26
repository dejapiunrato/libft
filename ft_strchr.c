/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psevilla <psevilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 20:22:52 by psevilla          #+#    #+#             */
/*   Updated: 2024/09/24 20:22:53 by psevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;

	ptr = (char *)str;
	while (*ptr)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	if (c == '\0')
		return (ptr);
	return (NULL);
}

/* int main() {
    const char *test_str1 = "Hola, mundo!";
    const char *test_str2 = "Cadena vacía";
    const char *test_str3 = "Carácteres especiales: #$%&";
    
    int tests[] = {
        'm',    // Caracter presente
        'z',    // Caracter no presente
        '!',    // Caracter especial presente
        '\0',   // Caracter nulo
        ' ',    // Espacio
        '#',    // Otro carácter especial
    };

    // Probar la función ft_strchr y la función estándar strchr
    for (int i = 0; i < sizeof(tests) / sizeof(tests[0]); i++) {
        char test_char = tests[i];

        printf("Buscando '%c' en '%s'\n", test_char, test_str1);
        char *result_ft = ft_strchr(test_str1, test_char);
        char *result_std = strchr(test_str1, test_char);
        printf("ft_strchr: %s\n", result_ft ? result_ft : "NULL");
        printf("strchr:   %s\n", result_std ? result_std : "NULL");
        printf("-------------------------\n");
    }

    // Probar con cadena vacía
    printf("Buscando 'a' en una cadena vacía:\n");
    char *result_empty_ft = ft_strchr("", 'a');
    char *result_empty_std = strchr("", 'a');
    printf("ft_strchr: %s\n", result_empty_ft ? result_empty_ft : "NULL");
    printf("strchr:   %s\n", result_empty_std ? result_empty_std : "NULL");
    printf("-------------------------\n");

    // Probar con otra cadena que tiene caracteres especiales
    printf("Buscando '#' en '%s'\n", test_str3);
    char *result_special_ft = ft_strchr(test_str3, '#');
    char *result_special_std = strchr(test_str3, '#');
    printf("ft_strchr: %s\n", result_special_ft ? result_special_ft : "NULL");
    printf("strchr:   %s\n", result_special_std ? result_special_std : "NULL");
    
    return 0;
} */
