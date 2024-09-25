// main.c
#include "libft.h"
#include <stdio.h>  // printf kullanmak için
#include <stdlib.h> // free kullanmak için

char	*ft_itoa(int n);  // ft_itoa fonksiyonunun prototipi

int	main(void)
{
	int values[] = {0, 123, -123, 2147483647, -2147483648}; // Test edilecek sayılar
	char *result;
	int i;

	for (i = 0; i < 5; i++)
	{
		result = ft_itoa(values[i]); // Her bir sayı için ft_itoa çağrılıyor
		if (result)
		{
			printf("ft_itoa(%d) = %s\n", values[i], result); // Sonucu yazdır
			free(result); // Malloc ile ayırdığımız hafızayı serbest bırak
		}
		else
		{
			printf("Memory allocation failed for %d\n", values[i]); // Hafıza hatası olursa uyar
		}
	}
	return (0);
}

