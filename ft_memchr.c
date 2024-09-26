#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;
	
	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

/* // Función para realizar pruebas
void run_tests() {
    const char *test_cases[] = {
        "Hello, World!",   // Caso normal
        "Test string",     // Caso normal
        "",                // Cadena vacía
        "Sample text",     // Caracter no presente
        "abc\0def",        // Caracter nulo en la cadena
        "ab\0cd",          // Caracter nulo al principio
        "cdeabc",          // Buscando al final
        "abcdabcdabcd",    // Buscando múltiples ocurrencias
        "Hello, World!",   // Caso normal
        NULL               // Caso nulo
    };
    
    int test_chars[] = {
        'W',     // Caracter presente
        's',     // Caracter presente
        'x',     // Caracter no presente
        '\0',    // Caracter nulo
        'c',     // Caracter presente
        'd',     // Caracter presente
        'a',     // Caracter presente
        'b',     // Caracter presente
        'e',     // Caracter presente
        'z',     // Caracter no presente
        'l',     // Caracter presente
        '\0'     // Caracter nulo
    };

    for (int i = 0; i < 10; i++) {
        const char *str = test_cases[i];
        int ch = test_chars[i];
        size_t n = str ? strlen(str) : 0; // Manejar caso nulo
        
        // Usar la implementación estándar
        char *result_standard = memchr(str, ch, n);
        // Usar la implementación personalizada
        char *result_custom = ft_memchr(str, ch, n);

        // Mostrar resultados
        printf("Testing with string: \"%s\" and character: '%c'\n", str ? str : "NULL", ch);
        if (result_standard)
            printf("  Standard memchr found: '%c' at position %ld\n", *result_standard, result_standard - str);
        else
            printf("  Standard memchr did not find '%c'\n", ch);

        if (result_custom)
            printf("  Custom ft_memchr found: '%c' at position %ld\n", *result_custom, result_custom - str);
        else
            printf("  Custom ft_memchr did not find '%c'\n", ch);

        printf("\n");
    }
}

int main()
{
    run_tests();
    return 0;
} */