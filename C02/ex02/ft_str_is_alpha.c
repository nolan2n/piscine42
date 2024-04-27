#include <stdio.h>

int     ft_str_is_alpha(char *str)
{
    int     i;

    i = 0;
    if (str[0] == '\0')
        return (1);
    while(str[i])
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
            return (0);
        i++;
    }
    return (1);
}

int     main(void)
{
        char    test[] = "AAAAAAAzsb0shjhhAAAAAZ";
        
        printf ("return : %d\n", ft_str_is_alpha(test));
        return (0);
}