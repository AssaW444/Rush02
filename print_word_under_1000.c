void	print_hundreds(int n, char *out, int size, int *pos);
void	print_tens_units(int n, char *out, int size, int *pos);

void	print_word_under_1000(int n, char *out, int size, int *pos)
{
	if (n >= 100)
	{
		print_hundreds(n, out, size, pos);
		n %= 100;
	}
	print_tens_units(n, out, size, pos);
}
