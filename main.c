// main.c
#include "libft.h"
#include <stdio.h>

#include <string.h> // strdup ile karşılaştırma için

int	main(void)
{
	const char *original = "Ecole 42";
	char *copy;

	// ft_strdup ile test
	copy = ft_strdup(original);
	if (copy == NULL)
	{
		printf("Memory allocation failed or original string is NULL.\n");
		return (1);
	}
	printf("Original: %s\n", original);
	printf("Copied (ft_strdup): %s\n", copy);

	// strdup ile karşılaştırma
	char *system_copy = strdup(original);
	printf("Copied (strdup): %s\n", system_copy);

	// Bellek boşaltma
	free(copy);
	free(system_copy);

	return (0);
}
