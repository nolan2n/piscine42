#include <unistd.h>

void    ft_putstr(char *str)
{
    while(*str)
        write (1, &*str++, 1);
}

char    *ft_strcpy(char *dest, char *src)
{
    int     i;

    i = 0;
    while(*src)
        dest[i++] = *src++;
    dest[i] = '\0';
    return(dest);
}

int     main(void)
{
    char    src[] = "hello world";
    char    dest[40];
    ft_putstr(ft_strcpy(dest, src));
    return (0);
}

