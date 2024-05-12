#include <stdio.h>

int ft_recursive_strlen(char *str)
{
    if(str[0] == '\0')
        return(0);
    else    
        return (ft_recursive_strlen(str + 1) + 1);
}
int     main(void)
{
    char    test[] = "hello";
    printf ("%d\n", ft_recursive_strlen(test));
    return (0);
}