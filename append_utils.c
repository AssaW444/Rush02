int	append_char(char *out, int out_size, int *pos, char c)
{
	if (*pos + 1 >= out_size)
		return (0);
	out[*pos] = c;
	(*pos)++;
	out[*pos] = '\0';
	return (1);
}

int	append_str(char *out, int out_size, int *pos, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!append_char(out, out_size, pos, s[i]))
			return (0);
		i++;
	}
	return (1);
}
