#include <unistd.h>

char *ft_strupcase(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 127)
			str[i] -= 32;
		i ++;
	}
	return(str);
}

void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[] = "AbCdEfG-Yz";
	ft_putstr("ABCDEFG-YZ:");
	ft_putstr(ft_strupcase(c));
	ft_putstr(":");
	ft_putstr(c);
}
