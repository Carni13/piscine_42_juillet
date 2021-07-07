#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void ft_strlowcase(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i ++;
	}
}

int	ft_str_is_alpha(char c)
{

		if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')))
		{
			return (0);
		}
	return (1);
}

char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;

	ft_strlowcase(str);

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;

	i++;
	while (str[i])
	{
		if((ft_str_is_alpha(str[i])== 1 )&& (ft_str_is_alpha(str[i-1]) == 0))
		{
			if(str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
		}
		i++;
		}

	return (str);

}

int main (){

	char source[]=("salut, comment tu vas? 42mots quarante-deux; cinquante+et+un");
	char* p_src = source;

	printf("%s \n",source);

	ft_strcapitalize(p_src);


	printf("%s\n",source);



return 0;
}
