#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t n, size_t size)
{
	size_t	n_size;
	size_t	i;	
	void	*ptr;

	n_size = n * size;
	ptr = malloc(n_size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while ( i < n_size)
		((char *)ptr)[i++] = 0;
	return (ptr);
}

/* int main() {
    int *arr1, *arr2;
    int n = 5;

    // Usar la implementación original de calloc
    arr1 = (int *)calloc(n, sizeof(int));
    // Usar la implementación personalizada ft_calloc
    arr2 = (int *)ft_calloc(n, sizeof(int));

    // Verificación de asignación
    if (arr1 == NULL || arr2 == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    // Comparar los resultados
    printf("Resultados de calloc original:\n");
    for (int i = 0; i < n; i++) {
        printf("arr1[%d]: %d\n", i, arr1[i]); // Debería imprimir 0
    }

    printf("\nResultados de ft_calloc:\n");
    for (int i = 0; i < n; i++) {
        printf("arr2[%d]: %d\n", i, arr2[i]); // Debería imprimir 0
    }

    // Liberar la memoria
    free(arr1);
    free(arr2);

    return 0;
} */
