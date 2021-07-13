#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	size_b;
	int	j;

	i = 0;
	j = 0;
	size_b = ft_strlen(base);
	if (size_b < 2)
		return (-1);
	while (i < size_b - 1)
	{
		while (j < size_b)
		{
			if ((base[j] >= 9 && base[j] <= 13)
				|| base[j] == '+' || base[j] == '-')
				return (-1);
			if (base[i] == base [j] && j != i)
				return (-1);
			j++;
		}
		i++;
		j = i + 1;
	}
    	return (0);
}

int ft_is_base(char c, char *base)
{
    int i;
    i = 0;

    while (base[i])
    {
        if (base[i] ==  c)
            return (i);
        i++;
    }
    return (-1);
}

int ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int i;
    int nb;
    
    nb = 0;
    i = 0;
    while(ft_is_base(nbr[i],base_from) >= 0 || nbr[i])
        {
            nb += ft_is_base(nbr[i],base_from);
            if (ft_is_base(nbr[i+1],base_from) >=  0)
                nb *= ft_strlen(base_from);
            i++;
        }
        return (nb);
}

int  main () {

    int  x;

    x =  ft_convert_base("3e8","0123456789abcdef","01");
    printf("x = %d\n",x);
}
