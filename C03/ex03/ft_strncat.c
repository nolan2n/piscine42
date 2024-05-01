#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str)
        write (1, &*str++, 1);
}

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int     i;
    int     destend;

    i = 0;
    destend = ft_strlen(dest);
    while(src[i] && nb--)
        dest[destend + i++] = *src++;
    dest[destend + i] = '\0';
    return(dest);
}

int     main(void)
{
    char    dest[] = "Hello ";
    char    src[] = "World !";

    ft_putstr(ft_strncat(dest, src, 3));
    return (0);
}