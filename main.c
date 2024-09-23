// main.c
#include <stdio.h>
#include "libft.h"  // ft_strjoin fonksiyonunun tanımlı olduğu header dosyanız


// Burada, ft_strdup ve ft_substr fonksiyonlarının çalıştığını varsayıyorum.
// Bunları kendi projendeki şekilde tanımlaman gerektiğini unutma.

int main(void)
{
    char *s1 = "!!hello!!";
    char *set = "!";
    char *result;

    result = ft_strtrim(s1, set);
    printf("Input: \"%s\"\nSet: \"%s\"\nResult: \"%s\"\n", s1, set, result);
    free(result);

    s1 = "   42 school   ";
    set = " ";
    result = ft_strtrim(s1, set);
    printf("Input: \"%s\"\nSet: \"%s\"\nResult: \"%s\"\n", s1, set, result);
    free(result);

    s1 = "abcdef";
    set = "xyz";
    result = ft_strtrim(s1, set);
    printf("Input: \"%s\"\nSet: \"%s\"\nResult: \"%s\"\n", s1, set, result);
    free(result);

    s1 = "xxxxxyhello worldyyxxxxx";
    set = "yx";
    result = ft_strtrim(s1, set);
    printf("Input: \"%s\"\nSet: \"%s\"\nResult: \"%s\"\n", s1, set, result);
    free(result);

    s1 = "";
    set = "!";
    result = ft_strtrim(s1, set);
    printf("Input: \"%s\"\nSet: \"%s\"\nResult: \"%s\"\n", s1, set, result);
    free(result);

    return 0;
}
