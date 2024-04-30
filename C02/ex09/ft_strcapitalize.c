#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str)
        write (1, &*str++, 1);
}

void    ft_lowercase(char *str)
{
    int     i;
    
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
}

int     check(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    if (c >= 'A' && c <= 'Z')
        return (1);
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

char    *ft_strcapitalize(char *str)
{
    int     i;

    i = 0;
    ft_lowercase(str);
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    while (str[i])
    {
        if (i > 0 && !(check(str[i - 1])) && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] -= 32;
        i++;
    }
    return (str);
}

int     main(void)
{
    char    test[] = "salut, comMent tu vas ? 42mots quarante-deux; cinquante+et+un";

    ft_putstr(ft_strcapitalize(test));
    return (0);
}