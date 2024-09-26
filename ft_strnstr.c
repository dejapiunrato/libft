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
	if (*s2 == 0) // Comprobar si s2 es nulo
		return ((char *)s1);
	while (j < n && *ptr) // Recorrer s1 hasta n
	{
		i = 0;
		if (*ptr == s2[i]) // Comprobar igualdad de carácteres
		{
			while (ptr[i] == s2[i] && s2[i]) // Recorrer s2
				i++;
			if (s2[i] == 0)
				return ((char *)ptr);
		}
		ptr++;
		j++;
	}
	return (NULL); // Retornar NULL en caso de no encontrar s2 en 21
}

/* int main() {
    // Casos de prueba
    const char *s1[] = {
        "Hello, world!",    // Caso 1: Subcadena presente
        "abcde",            // Caso 2: Subcadena presente, límite de n
        "abcabcabc",        // Caso 3: Subcadena repetida
        "abcdefg",          // Caso 4: Subcadena no presente
        "abc",              // Caso 5: Exacto
        "abcdef",           // Caso 6: Subcadena en el límite
        "",                 // Caso 7: s1 vacío
        "Hello",            // Caso 8: Subcadena vacía
        "lo",               // Caso 9: Subcadena presente
        "a",                // Caso 10: Subcadena presente
        "hello",            // Caso 11: Subcadena con letras en mayúscula
        "abcde",            // Caso 12: Subcadena en el inicio
        "fgh",              // Caso 13: Subcadena no presente
        "a",                // Caso 14: Subcadena en un solo carácter
        "bc",               // Caso 15: Subcadena en el final
        "abcde",            // Caso 16: Subcadena mayor que s1
    };

    const char *s2[] = {
        "world",           // Caso 1
        "f",               // Caso 2
        "abc",             // Caso 3
        "defg",            // Caso 4
        "abc",             // Caso 5
        "def",             // Caso 6
        "anything",        // Caso 7
        "",                // Caso 8
        "lo",              // Caso 9
        "a",               // Caso 10
        "H",               // Caso 11
        "abc",             // Caso 12
        "xyz",             // Caso 13
        "a",               // Caso 14
        "bc",              // Caso 15
        "abcdefg",         // Caso 16
    };

    size_t n[] = {
        1,  // Caso 1: longitud de s1
        1,   // Caso 2
        1,   // Caso 3
        1,   // Caso 4
        1,   // Caso 5
        1,   // Caso 6
        1,   // Caso 7: n = 0
        1,   // Caso 8: n = longitud de s1
        1,   // Caso 9
        1,   // Caso 10
        1,   // Caso 11
        1,   // Caso 12
        1,   // Caso 13
        1,   // Caso 14
        1,   // Caso 15
        1,  // Caso 16: n mayor que s1
    };

    // Total de casos de prueba
    int num_cases = sizeof(s1) / sizeof(s1[0]);

    printf("Probando ft_strnstr:\n\n");

    for (int i = 0; i < num_cases; i++) {
        char *result = ft_strnstr(s1[i], s2[i], n[i]);

        // Imprimir resultados
        printf("-------------------------------------------------\n");
        if (result == NULL) {
            printf("Caso %d: ft_strnstr retornó NULL\n", i + 1);
            printf("    (s1: \"%s\", s2: \"%s\", n: %zu)\n", s1[i], s2[i], n[i]);
        } else {
            printf("Caso %d: Coincidencia encontrada\n", i + 1);
            printf("    (s1: \"%s\", s2: \"%s\", n: %zu) -> \"%s\"\n", s1[i], s2[i], n[i], result);
        }
        printf("-------------------------------------------------\n");
    }

    return 0;
} */
