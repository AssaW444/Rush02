int	ipssi_atoi(char *str)
{
	int	i;
	int	nbr_moins;
	int	signe;
	int	result;

	i = 0;
	nbr_moins = 0;
	signe = 1;
	result = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
			i++;
		else if (str[i] == '+')
			i++;
		else if (str[i] == '-')
		{
			nbr_moins++;
			i++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
		else
			break ;
	}
	if (nbr_moins % 2 != 0)
		signe = -1;
	return (result * signe);
}
