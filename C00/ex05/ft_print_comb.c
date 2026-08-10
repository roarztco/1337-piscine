#include <unistd.h>

void ft_print_comb(void)
{
    int dig1;
    int dig2;
    int dig3;

    dig1 = '0';
    while(dig1 <= '7')
    {
        dig2 = dig1 + 1;
        while(dig2 <= '8')
        {
            dig3 = dig2 + 1;
            while(dig3 <= '9')
            {
                write(1, &dig1, 1);
                write(1, &dig2, 1);
                write(1, &dig3, 1);
                
                if(!(dig1 == '7' && dig2 == '8' && dig3 == '9'))
                    write(1, ", ", 1);
                dig3++;
            }
            dig2++;
        }
        dig1++;
    }
}