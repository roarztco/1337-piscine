#include <unistd.h>

int check_base(char *base)
{
    int i;
    int j;

    if(base[0] == '\0' || base[1] == '\0')
        return 0;
    i = 0;
    while (base[i])
    {
        if(base[i] == '+' || base[i] == '-' || base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
            return 0;
        i++;
    }
    i = 0;
    while (base[i])
    {
        j = i + 1;
        while(base[j])
        {
            if(base[j] == base[i])
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
int get_value(char *str, char *base, int i)
{
    int j;

    if(str[i])
    {
        j = 0;
        while(base[j])
        {
            if (str[i] == base[j])
                return j;
            j++;
        }
    }
    return -1;
}
int ft_atoi_base(char *str, char *base)
{
    int i;
    int sign;
    int number;
    int base_len;
    int value;

    if(check_base(base) == 0)
        return 0;
    i = 0;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    sign = 1;
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    base_len = ft_strlen(base);
    number = 0;
    value = get_value(str, base, i);
    while(!(value == -1))
    {
        number = number * base_len + value;
        i++;
        value = get_value(str, base, i);
    }
    return(number * sign);
}