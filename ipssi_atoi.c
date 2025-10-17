static int	is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v' || c == '\f');
}

static int	parse_sign(char *str, int *i)
{
	int	count;

	count = 0;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			count++;
		(*i)++;
	}
	return (count);
}

int	ipssi_atoi(char *str)
{
	int	i;
	int	minus;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while (is_space(str[i]))
		i++;
	minus = parse_sign(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (minus % 2 != 0)
		sign = -1;
	return (result * sign);
}
