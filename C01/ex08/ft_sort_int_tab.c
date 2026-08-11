#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int swp;
    int loop;

    loop = 1;
    while(loop == 1)
    {
        loop = 0;
        i = 0;
        while(i < size - 1)
        {
            if(tab[i] > tab[i + 1])
            {
                swp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = swp;
                loop = 1;
            }
            i++;
        }
    }
}