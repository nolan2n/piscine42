#include <stdio.h>

int     ft_is_lowercase(char *str)
{
    int     i;

    i = 0;
    if (str[0] == '\0')
        return (1);
    while (str[i])
    {
        if(!(str[i] >= 'a' && str[i] <= 'z'))
            return (0);
        i++;
    }
    return (1);
}

int     main(void)
{
    char    test[] = "mM";

    printf ("return : %d\n", ft_is_lowercase(test));
    return (0);
}