#include <unistd.h>

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while(str[i])
    {
        write (1, &str[i], 1);
        i++;
    }
}

char    *ft_strcpy(char *dest, char *src)
{
    int     i;

    i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return(dest);
}

int     main(void)
{
    char    src[] = "hello world";
    char    dest[40];
    ft_putstr(ft_strcpy(dest, src));
    return (0);
}

