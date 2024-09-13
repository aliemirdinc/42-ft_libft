// main.c
#include "libft.h"
#include <stdio.h>

int main() 
{
    char str1[] = "   -12345abc";
    char str2[] = "  9876";
    char str3[] = " 42 is the answer";
    
    printf("Result 1: %d\n", ft_atoi(str1));  // -12345
    printf("Result 2: %d\n", ft_atoi(str2));  // 9876
    printf("Result 3: %d\n", ft_atoi(str3));  // 42
    
    return 0;
}
