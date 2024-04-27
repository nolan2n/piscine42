#include <unistd.h>

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        write (1, &str[i], 1);
        i++;
    }
}

char    *ft_lowercase(char *str)
{
    int     i;
    
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str);
}

int     main(void)
{
    char    test[] = "ANB1la5HD41nn";
    ft_putstr(ft_lowercase(test));
    return (0);
}
