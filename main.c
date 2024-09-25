#include "libft.h"
#include <stdio.h>
#include <stdlib.h> // malloc ve free için gerekli

// Her karakteri büyük harfe çeviren fonksiyon
void toupper_function(unsigned int i, char *c)
{
    (void)i; // i kullanılmadığı için bu satırı ekliyoruz
    if (*c >= 'a' && *c <= 'z')
        *c -= 32; // Küçük harfi büyük harfe çevirir
}

int main(void)
{
    // Bellekten dinamik olarak yer ayırıp bir string oluşturuyoruz
    char *str = (char *)malloc(sizeof(char) * 14); // "hello world!" ve son null karakter için 14 karakterlik yer
    if (!str)
    {
        printf("Bellek ayırma hatası!\n");
        return (1);
    }

    // Stringimizi başlatıyoruz
    str = ft_memcpy(str, "hello world!", 14); // "hello world!" stringini str'e kopyalıyoruz

    // Orijinal stringi yazdırıyoruz
    printf("Original String: %s\n", str);

    // Stringin her karakterini büyük harfe çeviriyoruz
    ft_striteri(str, toupper_function);

    // Büyük harfe çevrilen stringi yazdırıyoruz
    printf("Uppercase String: %s\n", str);

    // Belleği temizliyoruz
    free(str);

    return 0;
}
