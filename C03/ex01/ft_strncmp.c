#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int     i;

    i = 0;
    while((s1[i] || s2[i]) && --n)
    //for example s1 = "hello"  s2 = "hella" and n = 4 
    //if I use n-- (post-decrementation) I will reach the fith char (s[4]) because n will decrement like this "4->3->2->1->0"
    //But if I use --n (pre-decrementation) I will reach the fourth char (s[3]) because n will decrement like this "3->2->1->0"
    {    
        if(s1[i] != s2[i])
            return(s1[i] - s2[i]);
        i++;
    }
    return(s1[i] - s2[i]);
}

int     main(void)
{
    char    s1[] = "hello";
    char    s2[] = "hella";

    printf("s1[i] - s2[i] = %d\n", ft_strncmp(s1, s2, 4));
    return (0);
}