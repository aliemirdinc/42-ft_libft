// main.c
#include "libft.h"
#include <stdio.h>

int main()
{
	char *baslangic = "hello";
	char son[5] = "canim";

	
	printf("son'un memmove önceki icerigi: %s\n", son);
	ft_memmove(son, baslangic, 5);
	printf("son'un memmove sonraki icerigi: %s\n", son);

}