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

char *ft_strcat(char *dest, char *src)
{
    int     i;
    int     destlen;

    i = 0;
    destlen = ft_strlen(dest);
    while(src[i])
        dest[destlen + i++] = *src++;
    dest[destlen + i] = '\0';
    return(dest);
}

int     main(void)
{
    char    dest[] = "Hello ";
    char    src[] = "World !";

    ft_putstr(ft_strcat(dest, src));
    return (0);
}