// main.c
#include "libft.h"
#include <stdio.h>

int main() 
{
    unsigned char *ptr = ft_calloc(3, 1);
    int i = 0;

    while(i < 3)
    {
        printf("actigimiz ptr pointerinin gosterdigi degerler = %d\n", *ptr);
        ptr++;
        i++;
    }
}
