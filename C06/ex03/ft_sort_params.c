#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    unsigned int i;

    i = 0;
    while(s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return((unsigned char)s1[i] - (unsigned char)s2[i]);
}
void sort_params(int argc, char **argv)
{
    char *swp;
    int i;
    int loop;

    loop = 1;
    while(loop == 1)
    {
        loop = 0;
        i = 1;
        while(i < argc - 1)
        {
            if(ft_strcmp(argv[i], argv[i + 1]) > 0)
            {
                swp = argv[i];
                argv[i] = argv[i + 1];
                argv[i + 1] = swp;
                loop = 1;
            }
            i++;
        }
    }
}
int main(int argc, char **argv)
{
    int i;

    i = 0;
    sort_params(argc, argv);
    if(argc >= 2)
    {
        int i;
        int j;

        i = 1;
        while(argv[i])
        {
            j = 0;
            while(argv[i][j])
            {
                write(1, &argv[i][j], 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    
}