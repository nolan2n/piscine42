#include <unistd.h>

void    ft_putstr(char *str)
 {
    write(1, &*str++, 1);
 }  