
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    int dest_len;

    dest_len = ft_strlen(dest);
    if (dest_len >= size)
    {
        return(size + ft_strlen(src));   
    }
    i = dest_len;
    j = 0;
    while(src[j] && i < size - 1)
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return(dest_len + ft_strlen(src));   
}