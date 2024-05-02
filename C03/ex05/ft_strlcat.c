#include <stdio.h>

int     ft_strlen(char *src)
{
    int     i;

    i = 0;
    while(*(src + i))
        i++;
    return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int     i;
    unsigned int     DestLen;
    unsigned int     SrcLen;
    unsigned int     n;

    DestLen = ft_strlen(dest);
    SrcLen = ft_strlen(src);
    n = (size - DestLen) - 1;
    i = 0;
    if(size == 0 || size <= DestLen)
        return(SrcLen + size);
    while(*src && n--)
        *(dest + (DestLen + i++)) = *src++;
    *(dest + (DestLen + i)) = '\0';
return(SrcLen + DestLen);    
}

int     main(void)
{
    char    dest[] = "Hello ";
    char    src[] = "World !";

    printf("DestLen = %d\n", ft_strlen(dest));
    printf("SrcLen = %d\n", ft_strlen(src));
    printf("return = %d\n", ft_strlcat(dest, src, 9));
    printf("%s\n", dest);
    return (0);
}
/* how it work
n                 |2|1|0|
src               |W|o|r|l|d| |!|
dest              |H|e|l|l|o| |
-----------------------------------------------------------
dest[DestLen + i] |H|e|l|l|o| | W | o |\0 |
i                 | Destlen(6)| 0 | 1 | 2 |
Destlen + i                   |6+0|6+1|6+2|
-----------------------------------------------------------
-In this case my index is DestLen + i because I want to copy src to dest from the end of dest (concatenation).
-When n = 0 (thereby Destlen + i = 8) we exit the loop and append '\0' at dest[6 + 2] corresponding to the eighth char.
-Size = the number of char including '\0' after the concatenation.
-n = the number of char I want to concatenate.That mean the size - Destlen - 1(='\0').
*/