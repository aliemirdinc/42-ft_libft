// main.c
#include "libft.h"
#include <stdio.h>

#include <string.h> 


int	main(void)
{
	const char *original = "Sizdebizimolanlardanmisiniz";
	char *result;

    result = ft_substr(original, 5, 22);
    printf("Kopyalanmis sonucumuz = %s\n", result);

	free(result);

	return (0);
}
