# Libft

Libft es el primer proyecto de la carrera de 42. Este proyecto consiste en recrear una biblioteca de funciones en C desde cero. Esta biblioteca incluye funciones estándar de C y otras utilidades adicionales que se pueden usar en proyectos futuros. El objetivo principal es entender profundamente el funcionamiento interno de estas funciones y trabajar con estructuras de datos básicas.

## Tabla de Contenidos

- [Instalación](#instalación)
- [Uso](#uso)
- [Funciones Implementadas](#funciones-implementadas)

## Instalación

Clona este repositorio en tu directorio local:

```bash
$ git clone https://github.com/erico-ke/libft.git
$ cd libft
```

Compila la biblioteca con:

```bash
$ make
```

Esto generará un archivo `libft.a`, que es la biblioteca compilada.

## Uso

Para usar la biblioteca en tu proyecto, incluye el archivo de cabecera `libft.h` y enlaza el archivo `libft.a` al compilar tu programa. Por ejemplo:

```c
#include "libft.h"

int main()
{
    char *str = ft_strdup("Hola, Libft!");
    ft_putstr_fd(str, 1);
    free(str);
    return 0;
}
```

Compila tu programa junto con la biblioteca:

```bash
$ gcc -Wall -Wextra -Werror -L. -lft tu_programa.c -o tu_programa
```

## Funciones Implementadas

### Parte 1: Funciones de la biblioteca estándar de C

Estas son funciones que se encuentran en `<ctype.h>`, `<string.h>`, `<stdlib.h>`, etc.

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_strlen`
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_toupper`
- `ft_tolower`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_memchr`
- `ft_memcmp`
- `ft_strnstr`
- `ft_atoi`
- `ft_calloc`
- `ft_strdup`

### Parte 2: Funciones adicionales

Funciones útiles no incluidas en la biblioteca estándar.

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Parte Bónus: Listas enlazadas

Funciones para trabajar con listas enlazadas.

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`
