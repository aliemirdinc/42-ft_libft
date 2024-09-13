// main.c
#include "libft.h"
#include <stdio.h>
int main()
{
	const char *haystack;
	const char *needle;
	size_t len;

	haystack = "Ali Emir geliyor ve gidiyor";
	needle = "li";
	len = 30;
	printf("ilk haystack noktasi = %p", haystack);
	printf("needle'in ilk bulundugu nokta = %p\n", ft_strnstr(haystack, needle, len));
}
