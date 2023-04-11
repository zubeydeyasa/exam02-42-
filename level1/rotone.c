#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rotone(char *str)
{
	int i;
	char c;

	i = 0;
	while(str[i])
	{
		c = str[i];
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			c++;
		else if(c == 'z' || c == 'Z')
			c -= 25;
		ft_putchar(c);
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		rotone(av[1]);
	ft_putchar('\n');
	return(0);
}