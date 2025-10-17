int	append_str(char *out, int size, int *pos, char *s);
void	print_group(int n, int scale_index, char *out, int *ctx);

static void	write_error(char *out, int size)
{
	append_str(out, size, &(int){0}, "error\n");
}

static void	write_zero(char *out, int size)
{
	append_str(out, size, &(int){0}, "zero\n");
}

static void	fill_groups(int n, int *groups, int *count)
{
	*count = 0;
	while (n > 0 && *count < 4)
	{
		groups[*count] = n % 1000;
		n /= 1000;
		(*count)++;
	}
}

static void	write_groups(int *groups, int count, char *out, int *ctx)
{
	int	i;

	i = count - 1;
	while (i >= 0)
	{
		if (groups[i] > 0)
		{
			print_group(groups[i], i, out, ctx);
			if (i > 0 && ctx[1] + 1 < ctx[0])
			{
				out[ctx[1]++] = ' ';
				out[ctx[1]] = '\0';
			}
		}
		i--;
	}
	if (ctx[1] + 1 < ctx[0])
	{
		out[ctx[1]++] = '\n';
		out[ctx[1]] = '\0';
	}
}

void	convert_number(int n, char *out, int size)
{
	int	groups[4];
	int	count;
	int	ctx[2];

	ctx[0] = size;
	ctx[1] = 0;
	if (n < 0)
		return (write_error(out, size));
	if (n == 0)
		return (write_zero(out, size));
	fill_groups(n, groups, &count);
	write_groups(groups, count, out, ctx);
}
