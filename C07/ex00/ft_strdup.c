#include <stdlib.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while(*(str + i))
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char    *dest;
    int     i;

    i = 0;
    if (!(dest = (char*)malloc(sizeof(char) * ft_strlen(src) + 1)))
        return NULL;
    while(*src)
        *(dest + i++) = *src++;
    *(dest + i) = '\0';
    return(dest);
}

int main(int argc, char **argv)
{
    char    *test;

    if (argc == 2)
    {
        test = ft_strdup(*(argv + 1));
        printf(":%s:\n", test);
    }
    free(test);
    return(0);
}