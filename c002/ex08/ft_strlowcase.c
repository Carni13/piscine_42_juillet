#include <unistd.h>

char *ft_strlowcase(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
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
	ft_putstr("abcdefg-yz:");
	ft_putstr(ft_strlowcase(c));
	ft_putstr(":");
	ft_putstr(c);
}
