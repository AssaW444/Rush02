char	**get_scales(void);
void	print_word_under_1000(int n, char *out, int size, int *pos);
int	append_char(char *out, int size, int *pos, char c);
int	append_str(char *out, int size, int *pos, char *s);

void	print_group(int n, int scale_index, char *out, int *ctx)
{
	char	**scales;

	scales = get_scales();
	if (n <= 0)
		return ;
	print_word_under_1000(n, out, ctx[0], &ctx[1]);
	if (scale_index > 0)
	{
		append_char(out, ctx[0], &ctx[1], ' ');
		append_str(out, ctx[0], &ctx[1], scales[scale_index]);
	}
}
