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

char *ft_strcapitalize(char *str)
{
	int i;
	i = 0;
	
	while (str + i)
	{

	if (str[i] > 96 && str[i] < 127) //min en maj
			str[i] -= 32;

	if (str[i] > 64 && str[i] < 91) // maj en min
			str[i] += 32;
	}

}
