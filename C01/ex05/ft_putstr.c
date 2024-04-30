#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str)
        write (1, &*str++, 1);
}

int     main(void)
{
    char    test[] = "Hello World !";
    ft_putstr(test);
    return (0);
}