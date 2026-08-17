#include <unistd.h>

int check_base(char *base)
{
    int i;
    int j;

    if(base[0] == '\0' || base[1] == '\0')
        return 0;
    i = 0;
    while(base[i])
    {
        if(base[i] == '+' || base[i] == '-')
            return 0;
        i++;
    }
    i = 0;
    while(base[i])
    {
        j =  i + 1;
        while(base[j])
        {
            if(base[i] == base[j])
                return 0;
            j++;
        }
        i++;
    }
    return 1;
}
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}
void ft_putnbr_base(int nbr, char *base)
{
    int x;
    int base_len;
    long num;

    num = nbr;
    base_len = ft_strlen(base);
    if (check_base(base) == 1)
    {
        if(num < 0)
        {
            write(1, "-", 1);
            num = -num;
        }
        if(num >= base_len)
            ft_putnbr_base(num / base_len, base);
        x = (num % base_len); 
        write(1, &base[x], 1);       
    }
}