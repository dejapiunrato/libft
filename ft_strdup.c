#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*d;
	char	*aux;

	size = ft_strlen(s) + 1;
	d = malloc(size);
	if (d == NULL)
		return (NULL);
	aux = d;
	while (*s)
		*d++ = *s++;
	*d = '\0';
	return (aux);
}

/* void compare_strdup(const char *test_str) {
    char *std_dup = strdup(test_str); // Usar la implementación estándar
    char *my_dup = ft_strdup(test_str); // Usar la implementación personalizada

    // Comprobar si ambas asignaciones fueron exitosas
    if (std_dup == NULL || my_dup == NULL) {
        printf("Error al duplicar la cadena: \"%s\"\n", test_str);
        free(std_dup); // Liberar la memoria si fue asignada
        free(my_dup);
        return;
    }

    // Comparar las cadenas duplicadas
    if (strcmp(std_dup, my_dup) == 0) {
        printf("Prueba exitosa: \"%s\"\n", test_str);
    } else {
        printf("Prueba fallida: \"%s\"\n", test_str);
        printf("  std_dup: \"%s\"\n", std_dup);
        printf("  my_dup: \"%s\"\n", my_dup);
    }

    // Liberar la memoria
    free(std_dup);
    free(my_dup);
}

int main() {
    // Definir un array de pruebas
    const char *test_cases[10] = {
        "Hola, mundo!",
        "Cadena de prueba.",
        "Cadenas vacías.",
        "",
        "1234567890",
        "Caracteres especiales: @#&*()",
        "Una cadena muy larga para probar la duplicación de memoria en C. ¿Funciona?",
        "¡Feliz cumpleaños!",
        "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z",
        "Final del test."
    };

    // Realizar las pruebas
    for (int i = 0; i < 10; i++) {
        compare_strdup(test_cases[i]);
    }

    return 0;
} */