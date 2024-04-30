#include <unistd.h>

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        write (1, &str[i++], 1);
}

int     main(void)
{
    char    test[] = "Hello World !";
    ft_putstr(test);
    return (0);
}