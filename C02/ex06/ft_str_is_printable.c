#include <stdio.h>

int     ft_is_printable(char *str)
{
    int     i;

    i = 0;
    if (str[0] == '\0')
        return (1);
    while (str[i])
    {
        if(!(str[i] > 31 || str[i] == 127))
            return (0);
        i++;
    }
    return (1);
}

int     main(void)
{
    char    test[] = "nolann";

    printf ("return : %d\n", ft_is_printable(test));
    return (0);
}