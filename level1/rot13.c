#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_rot13(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
			c += 13;
		else if((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
			c -= 13;
		ft_putchar(c);
		i++; 
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		ft_rot13(av[1]);
	ft_putchar('\n');
	return(0);
}