#include <unistd.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (*(str + i))
        i++;
    return (i);
}

void    ft_reverse_putstr_recursive(char *str)
{
    int     Strlen;
    int     i;

    i = 0;
    Strlen = ft_strlen(str) - 1;
    if (i < Strlen)
        ft_reverse_putstr_recursive(str + (i + 1));
    write(1, &*(str + i), 1);
}


int     main(void)
{
    char    test[] = "Hello";
    ft_reverse_putstr_recursive(test);
    return (0);
}