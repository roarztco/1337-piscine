#include <stdio.h>

int ft_sqrt(int nb)
{
    int i;

    i = 1;
    while(i < nb)
    {
        if(i * i == nb)
            return i;
        i++;
    }
    return 0;
}