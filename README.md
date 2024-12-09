# libft

Este proyecto consiste en crear una librería con funciones generales, muchas de ellas incluidas en la librería estandar de C.
| | |
| :--- | :--- |
| Nombre de programa | libft.a |
| **Archivos a entregar** | Makefile, libft.h ft_*.c |
| **Makefile** | NAME, all, clean, fclean, re |
| **Funciones autorizadas** | Instrucciones abajo |
| **Descripción** | Escribe tu propia libería: un conjunto de funciones que será una herramienta muy útil a lo largo del cursus. |

## Parte 1 - Funciones de libc
| Función | Descripción |
| :--- | :--- |
| [ft_isalpha](https://github.com/dejapiunrato/libft/blob/main/ft_isalpha.c) | Devuelve 1 si el entero pasado como parámetro corresponde con una letra en la tabla ascii y 0 si no. |
| [ft_isdigit](https://github.com/dejapiunrato/libft/blob/main/ft_isdigit.c) | Devuelve 1 si el entero pasado como parámetro corresponde con un número en la tabla ascii y 0 si no. | 
| [ft_isalnum](https://github.com/dejapiunrato/libft/blob/main/ft_isalnum.c) | Devuelve 1 si el entero pasado como parámetro corresponde con un número o una letra en la tabla ascii y 0 si no. |
| [ft_isascii](https://github.com/dejapiunrato/libft/blob/main/ft_isascii.c) | Devuelve 1 si el enetro pasado como parámetro corresponde con un caracter de la tabla ascii y 0 si no. |
| [ft_isprint](https://github.com/dejapiunrato/libft/blob/main/ft_isprint.c) | Devuelve 1 si el entero pasado como parámetro corresponde conun caracter imprimible de la tabla ascii y 0 si no. |
| [ft_strlen](https://github.com/dejapiunrato/libft/blob/main/ft_strlen.c) | Devuelve el número de caracteres que contiene la cadena de texto pasada como parámetro. |
| [ft_memset](https://github.com/dejapiunrato/libft/blob/main/ft_memset.c) | Rellena una región de la memoria con un caracter concreto. |
| [ft_bzero](https://github.com/dejapiunrato/libft/blob/main/ft_bzero.c) | Rellena una región de la memoria con ceros. |
| [ft_memcpy](https://github.com/dejapiunrato/libft/blob/main/ft_memcpy.c) | Copia el contenido de una región de la memoria en otra. |
| [ft_memmove](https://github.com/dejapiunrato/libft/blob/main/ft_memmove.c) | Copia el contenido de una región de la memoria en otra, pero si estas se solapan, copia desde atrás hacia delante para evitar sobrescrituras. El resultado esperado es el mismo que de memcpy, pero de forma más segura al tener en cuenta solapamientos de memoria. |
| [ft_strlcpy](https://github.com/dejapiunrato/libft/blob/main/ft_strlcpy.c) | Copia un número dado de caracteres de una cadena de origen en una de destino y devuelve el tamaño de la cadena de origen. |
| [ft_strlcat](https://github.com/dejapiunrato/libft/blob/main/ft_strlcat.c) | Concatena una cadena de origen en otra de destino, siempre que haya espacio para ello, si no lo hay concatena lo que pueda y devuelve la suma del tamaño de ambas cadenas. |
| [ft_toupper](https://github.com/dejapiunrato/libft/blob/main/ft_toupper.c) | Pasa una letra pasada como parámetro a mayúscula. |
| [ft_tolower](https://github.com/dejapiunrato/libft/blob/main/ft_tolower.c) | Pasa una letra pasada como parámetro a minúscula. |
| [ft_strchr](https://github.com/dejapiunrato/libft/blob/main/ft_strchr.c) | Busca la primera aparición de un caracter dentro de una cadena y devuelve un puntero a esa posición. |
| [ft_strrchr](https://github.com/dejapiunrato/libft/blob/main/ft_strrchr.c) | Busca la última aparición de un caracter dentro de una cadena y devuelve un puntero a esa pocisión. |
| [ft_strncmp](https://github.com/dejapiunrato/libft/blob/main/ft_strncmp.c) | Compara dos cadenas hasta una posición "n", si la primera es más larga que la primera, devuelve un número positivo, si es alrevés, uno negativo y si son iguales hasta donde se han comparado, un 0. |
| [ft_memchr](https://github.com/dejapiunrato/libft/blob/main/ft_memchr.c) | Busca la primera aparición de un caracter en los primeros "n" bytes de un bloque de memoria y devuelve un puntero a su posición. |
| [ft_memcmp](https://github.com/dejapiunrato/libft/blob/main/ft_memcmp.c) | Compara dos bloques de momoria los primeros "n" bytes, devuelve un valor positivo si el primer bloque es mayor que el segundo, negativo si es al revés y 0 si son iguales. |
| [ft_strnstr](https://github.com/dejapiunrato/libft/blob/main/ft_strnstr.c) | Busca la primera aparición de una subcadena dentro de los primeros "n" caracteres a analizar y devuelve un puntero al inicio de la subcadena. |
| [ft_atoi](https://github.com/dejapiunrato/libft/blob/main/ft_atoi.c) | Convierte una cadena que contenga un número al principio en el entero que representa, teniendo en cuenta el signo e ignorando los espacios del principio y del final |

## Parte 2 - Funciones adicionales
