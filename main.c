#include "libft.h"  // ft_putchar_fd fonksiyonu için gerekli
#include <stdio.h>  // printf ve perror için gerekli

int main(void)
{
	printf("Ekrana yazdirma testi: \n");
	ft_putstr_fd("selamlar", 1); // 'A' harfini ekrana yazdır
	printf("\n"); // Satır sonu ekleyelim ki çıktılar düzgün olsun

	// 2. Hata çıkışına yazdırma (stderr)
	printf("Hata çikişina yazdirma testi: \n");
	ft_putstr_fd("bilmem", 2); // 'B' harfini hata çıkışına yazdır
	printf("\n");
}
