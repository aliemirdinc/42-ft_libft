// main.c
#include "libft.h"
#include <stdio.h>

int main() {
    char str[20] = "Hello, world!";
    printf("Length: %zu\n", ft_strlen(str));
    char dest[20];
    ft_strcpy(dest, str);
    printf("Copied string: %s\n", dest);
    return 0;
}
