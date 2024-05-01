#include <stdio.h>

int     ft_strlen(char *src)
{
    int     i;

    i = 0;
    while(src[i])
        i++;
    return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int     i;
    unsigned int     DestLen;
    unsigned int     SrcLen;
    unsigned int     copy_up_to_nChar;

    DestLen = ft_strlen(dest);
    SrcLen = ft_strlen(src);
    copy_up_to_nChar = size - (DestLen - 1);
    i = 0;
    if(size == 0 || size <= DestLen)
        return(SrcLen + size);
    while(src[i] && copy_up_to_nChar--)
        dest[DestLen + i++] = *src++;
    dest[DestLen + i] = '\0';
return(SrcLen + DestLen);    
}

int     main(void)
{
    char    dest[] = "Hello ";
    char    src[] = "World !";

    printf("DestLen = %d\n", ft_strlen(dest));
    printf("SrcLen = %d\n", ft_strlen(src));
    printf("return = %d\n", ft_strlcat(dest, src, 11));
    ft_strlcat(dest, src, 9);
    printf("%s\n", dest);
    return (0);
}