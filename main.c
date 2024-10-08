#include <stdio.h>   // printf için
#include <stdlib.h>  // malloc için
#include "libft.h"   // ft_lstnew için


int main(void)
{
    int i = 0;
    while (i <= 47)
    {
        ft_print_result(ft_isdigit(i));
        i++;
    }
}
