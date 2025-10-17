char	**get_ones(void);
char	**get_tens(void);
int	append_char(char *out, int out_size, int *pos, char c);
int	append_str(char *out, int out_size, int *pos, char *s);

void	print_tens_units(int n, char *out, int out_size, int *pos)
{
	char	**ones;
	char	**tens;

	ones = get_ones();
	tens = get_tens();
	if (n >= 20)
	{
		if (!append_str(out, out_size, pos, tens[n / 10]))
			return ;
		if (n % 10)
		{
			append_char(out, out_size, pos, ' ');
			append_str(out, out_size, pos, ones[n % 10]);
		}
	}
	else
		append_str(out, out_size, pos, ones[n]);
}
