#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int c;
    int *p;

    if(min >= max)
        return 0;
    c = max - min;
    p = malloc(sizeof(int) * c);
    if(p == NULL)
        return -1;
    i = 0;
    while(min < max)
    {
        p[i] = min;
        min++;
        i++;
    }
    *range = p;
    return(c);
}