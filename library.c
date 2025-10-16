char	**get_ones(void)
{
	static char	*ones[] = {
		"zero", "one", "two", "three", "four", "five", "six", "seven",
		"eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen",
		"fifteen", "sixteen", "seventeen", "eighteen", "nineteen", 0
	};

	return (ones);
}

char	**get_tens(void)
{
	static char	*tens[] = {
		"", "", "twenty", "thirty", "forty", "fifty",
		"sixty", "seventy", "eighty", "ninety", 0
	};

	return (tens);
}

char	**get_scales(void)
{
	static char	*scales[] = {
		"", "thousand", "million", "billion", 0
	};

	return (scales);
}
