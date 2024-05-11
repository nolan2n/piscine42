#include <unistd.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (*(str + i))
        i++;
    return (i);
}

void    ft_putstr_recursive(char *str, int Strlen)
{
    if (Strlen > 0)
        ft_putstr_recursive(str, Strlen - 1); 
    write(1, &*(str + Strlen), 1);
}

int     main(void)
{
    char    test[] = "Hello";
    int     Strlen;
    Strlen = ft_strlen(test) - 1;
    ft_putstr_recursive(test, Strlen);
    return (0);
}