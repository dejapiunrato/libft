#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == 0 || s2[i] == 0) && i < n)
		return (s1[i] - s2[i]);
	return (0);
}

/* int main() {
    char *str1 = "Hola";
    char *str2 = "Hola";
    char *str3 = "Holb";
    char *str4 = "Hola Mundo";
    char *str5 = "Hola";
    
    // Comparaciones
    printf("Comparando '%s' y '%s' (n=4): ft_strncmp = %d, strncmp = %d\n", str1, str2, ft_strncmp(str1, str2, 4), strncmp(str1, str2, 4));
    printf("Comparando '%s' y '%s' (n=4): ft_strncmp = %d, strncmp = %d\n", str1, str3, ft_strncmp(str1, str3, 4), strncmp(str1, str3, 4));
    printf("Comparando '%s' y '%s' (n=4): ft_strncmp = %d, strncmp = %d\n", str1, str4, ft_strncmp(str1, str4, 4), strncmp(str1, str4, 4));
    printf("Comparando '%s' y '%s' (n=5): ft_strncmp = %d, strncmp = %d\n", str1, str5, ft_strncmp(str1, str5, 5), strncmp(str1, str5, 5));
    
    // Prueba con n = 0
    printf("Comparando '%s' y '%s' (n=0): ft_strncmp = %d, strncmp = %d\n", str1, str2, ft_strncmp(str1, str2, 0), strncmp(str1, str2, 0));

    return 0;
} */
