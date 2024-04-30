#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str)
        write (1, &*str++, 1);
}

char    *ft_strupcase(char *str)
{
    int     i;
    
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return (str);
}

int     main(void)
{
    char    test[] = "no1la0541nn";
    ft_putstr(ft_strupcase(test));
    return (0);
}