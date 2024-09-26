#include <stdio.h>   // printf için
#include <stdlib.h>  // malloc için
#include "libft.h"   // ft_lstnew için


int main(void)
{
    // Test için örnek bir içerik oluşturuyoruz
    char *content = "Merhaba Dünya";

    // Yeni bir liste elemanı oluşturuyoruz
    t_list *new_element = ft_lstnew((void *)content);

    // Bellekten yer ayırma işlemi başarısız olursa
    if (new_element == NULL)
    {
        printf("Bellekten yer ayırma başarısız oldu.\n");
        return (1);  // Programdan çık
    }

    // Yeni elemanın content kısmını ve next kısmını kontrol ediyoruz
    printf("Content: %s\n", (char *)new_element->content);
    printf("Next pointer: %p\n", new_element->next);

    // Bellekten ayırdığımız alanı boşaltıyoruz
    free(new_element);

    return 0;
}
 