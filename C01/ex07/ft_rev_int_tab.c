#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
    int first;
    int last;
    int swp;

    first = 0;
    last = size - 1;
    while(first <= last)
    {
        swp = tab[first];
        tab[first] = tab[last];
        tab[last] = swp;
        first++;
        last--;
    }
}