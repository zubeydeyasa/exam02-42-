#include <unistd.h>
void ft_number(int i)
{
    char str[10] = "0123456789";
    if(i > 9)
        ft_number(i / 10);
    else
        write(1, &str[i % 10], 1);
}

int main()
{
    int i = 1;
    while(1 <= 100)
    {
        if(i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if(i % 3 == 0)
            write(1, "fizz", 1);
        else if(i % 5 == 0)
            write(1, "buzz", 1);
        else
            ft_number(i);
        i++;
        write(1, "\n", 1);
    }
}