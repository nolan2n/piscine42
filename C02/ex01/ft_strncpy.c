#include <unistd.h>

void    ft_putstr(char *str)
{
    while(*str)
        write (1, &*str++, 1);
}

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int     i;

    i = 0;
    while(*src && n--)
        *(dest + i++) = *src++;
    if (n--)//in case n > SrcLen
        *(dest + i++) = '\0';
    return (dest);
}

int     main(void)
{
    char    src[] = "hello";
    char    dest[4];
    ft_putstr(ft_strncpy(dest, src, 3));
    return (0);
}