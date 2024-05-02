#include <stdio.h>

int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while(*(str + i))
        i++;
    return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int     i;
    int     SrcLen;
    int     n;

    SrcLen = ft_strlen(src);
    n = size - 1;
    i = 0;
    while (*src && n--)
        *(dest + i++) = *src++;
    *(dest + i) = '\0';
    return (SrcLen);
}

int     main(void)
{
    char    src[] = "abcdefg";
    char    dest[5];
    printf("lenght of src = %d\n", ft_strlcpy(dest, src, 5));
    printf("dest : %s\n", dest);
    return (0);
}
/* how it work (n = size - 1 = 5 - 1 = 4)
n     |4|3|2|1|0 |
src   |a|b|c|d|e |f|g|
dest  |a|b|c|d|\0|
i     |0|1|2|3|4 | 

-When n = 0 (thereby i = 4) we exit the loop and append '\0' at dest[4] corresponding to the fith char
-Size = the number of char I want to copy from src + '\0'. So if I want to copy 4 char, size should be equal to 5 
-n = the number of char I want to copy from src. that mean the size - 1 (size - '\0') 
*/