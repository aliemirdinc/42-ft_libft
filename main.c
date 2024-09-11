// main.c
#include "libft.h"
#include <stdio.h>

int main()
{
	const char *a = "merhaba";
	const char *b = "";

	printf("iki stringin ilk farkli karakterleri arasindaki fark = %d\n", ft_strncmp(a, b, 7));
}