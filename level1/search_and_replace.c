#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void src_and_repl(char *str, char a, char b)
{
    int i;
    i = 0;
    while(str[i])
    {
        if(str[i] == a)
            ft_putchar(b);
        else 
            ft_putchar(str[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 4)
        src_and_repl(av[1], av[2][0], av[3][0]);
    ft_putchar('\n');
    return (0);
}