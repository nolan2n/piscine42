#include <unistd.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(*(str + i))
        i++;
    return(i);
}

void    ft_strcpy_recursive(char *src, int  strlen)
{
    char    dest[6];

    if (strlen > 0)
        ft_strcpy_recursive(src, strlen - 1);
    *dest = *(src + strlen);
    write(1, &*dest, 1);
}

int     main(void)
{
    char    src[] = "Hello";

    int     Strlen;
    Strlen = ft_strlen(src);
    ft_strcpy_recursive(src, Strlen);
    return (0);
}