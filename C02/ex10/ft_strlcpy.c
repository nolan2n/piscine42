#include <stdio.h>

int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int     i;
    int     len;

    len = ft_strlen(src);
    i = 0;
    while (src[i] && i < (size - 1))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (len);
}

int     main(void)
{
    char    src[] = "abcdefg";
    char    dest[5];
    ft_strlcpy(dest, src, 5);
    printf("lenght of src = %d\n", ft_strlcpy(dest, src, 5));
    printf("dest : %s\n", dest);
    return (0);
}