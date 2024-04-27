#include <stdio.h>

int     ft_is_uppercase(char *str)
{
    int     i;

    i = 0;
    if (str[0] == '\0')
        return (1);
    while (str[i])
    {
        if(!(str[i] >= 'A' && str[i] <= 'Z'))
            return (0);
        i++;
    }
    return (1);
}

int     main(void)
{
    char    test[] = "M";

    printf ("return : %d\n", ft_is_uppercase(test));
    return (0);
}