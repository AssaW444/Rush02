char	**get_ones(void);
int	append_char(char *out, int out_size, int *pos, char c);
int	append_str(char *out, int out_size, int *pos, char *s);

void	print_hundreds(int n, char *out, int out_size, int *pos)
{
	char	**ones;

	ones = get_ones();
	if (!append_str(out, out_size, pos, ones[n / 100]))
		return ;
	if (!append_str(out, out_size, pos, " hundred"))
		return ;
	if (n % 100)
		append_char(out, out_size, pos, ' ');
}
