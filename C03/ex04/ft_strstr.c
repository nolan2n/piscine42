#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str)
        write (1, &*str++, 1);
}

char    *ft_strstr(char *str, char *to_find)
{
    int     i;
    int     j;

    i = 0;
    if (!to_find)
        return (str);
    while(str[i])
    {
        j = 0;
        while(str[i + j] && str[i + j] == to_find[j])
        {
            if(to_find[j + 1] == '\0')
                return (&*(str + i));
                //I return &str[i] instead of str because I want to return str from to_find[0]
            j++;
        }
        i++;
    }
    return (0);
}

int     main(void)
{
    char    str[] = "hello, world";
    char    to_find[] = ", wor";

    ft_putstr(ft_strstr(str, to_find));
    return (0);
}