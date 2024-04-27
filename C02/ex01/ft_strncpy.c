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

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int     i;

    i = 0;
    while(src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

int     main(void)
{
    char    src[] = "hello world";
    char    dest[40];
    ft_putstr(ft_strncpy(dest, src, 8));
    return (0);
}