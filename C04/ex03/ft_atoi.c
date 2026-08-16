
int ft_atoi(char *str)
{
    int i;
    int sign;
    int number;

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
    number = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        number = number * 10 + (str[i] - '0');
        i++;
    }
    return(number * sign);
}