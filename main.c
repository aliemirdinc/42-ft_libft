// main.c
#include "libft.h"
#include <stdio.h>  // printf kullanmak için
#include <stdlib.h> // free kullanmak için

// Karakteri büyük harfe çeviren fonksiyon
char toupper_function(unsigned int i, char c)
{
    (void)i; // i değişkenini kullanmadığımız için hata almamak adına bu şekilde belirtiyoruz
    if (c >= 'a' && c <= 'z')
        return (c - 32); // Küçük harfi büyük harfe çevirir
    return c;
}

// Karakteri küçük harfe çeviren fonksiyon
char tolower_function(unsigned int i, char c)
{
    (void)i; // i değişkenini kullanmadığımız için hata almamak adına bu şekilde belirtiyoruz
    if (c >= 'A' && c <= 'Z')
        return (c + 32); // Büyük harfi küçük harfe çevirir
    return c;
}

int main(void)
{
    char *original_str = "Hello World!";
    
    // Büyük harfe çevirme testi
    char *result_upper = ft_strmapi(original_str, &toupper_function);
    if (result_upper)
    {
        printf("Original String: %s\n", original_str);
        printf("Uppercase String: %s\n", result_upper);
        free(result_upper); // malloc ile oluşturulan stringi serbest bırak
    }
    
    // Küçük harfe çevirme testi
    char *result_lower = ft_strmapi(original_str, &tolower_function);
    if (result_lower)
    {
        printf("Lowercase String: %s\n", result_lower);
        free(result_lower); // malloc ile oluşturulan stringi serbest bırak
    }

    return 0;
}
