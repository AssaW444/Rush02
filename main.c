#include <unistd.h>
#include <stdlib.h>

int	ipssi_atoi(char *str);
void	convert_number(int n, char *out, int out_size);

static int	check_args(int argc)
{
	if (argc != 2)
	{
		write(1, "error\n", 6);
		return (0);
	}
	return (1);
}

static char	*init_buffer(int size)
{
	char	*out;

	out = (char *)malloc(size);
	if (!out)
	{
		write(1, "error\n", 6);
		return (NULL);
	}
	out[0] = '\0';
	return (out);
}

int	main(int argc, char **argv)
{
	int		number;
	char	*out;
	int		out_size;
	int		i;

	if (!check_args(argc))
		return (0);
	out_size = 8192;
	out = init_buffer(out_size);
	if (!out)
		return (0);
	number = ipssi_atoi(argv[1]);
	convert_number(number, out, out_size);
	i = 0;
	while (out[i])
		i++;
	if (i > 0)
		write(1, out, i);
	free(out);
	return (0);
}
