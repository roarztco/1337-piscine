#include <unistd.h>

void ft_print_comb2(void)
{
    int num1;
    int num2;
    char i;

    num1 = 0;
    while(num1 <= 98)
    {
        num2 = num1 + 1;
        while(num2 <= 99)
        {
            i = ((num1 / 10) + '0');
            write(1, &i, 1);
            i = ((num1 % 10) + '0');
            write(1, &i, 1);
            write(1, " ", 1);
            i = ((num2 / 10) + '0');
            write(1, &i, 1);
            i = ((num2 % 10) + '0');
            write(1, &i, 1);
            if(!(num1 == 98 && num2 == 99))
                write(1, ", ", 2);
            num2++;
        }
        num1++;
    }
}

int main()
{
    ft_print_comb2();
}