#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void first_word(char *str)
{
    int i;
    i = 0;
    while(str[i] == 32 || str[i] == 9)
        i++;
    while(str[i] != 32 && str[i] != 9 && str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
        first_word(av[1]);
    ft_putchar('\n');
    return(0);
}