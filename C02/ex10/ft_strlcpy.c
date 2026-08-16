
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;

    j = 0;
    while(src[j])
        j++;
    if(size == 0)
        return(j); 
    i = 0;
    while(src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    
    return (j);
}