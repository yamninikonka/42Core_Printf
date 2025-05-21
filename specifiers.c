
#include "libftprintf.h"

void	print_ptr(void *ptr)
{
	unsigned long long int	num;
	char					*result;

	// char					str[32];
	num = (unsigned long long int)ptr;
	result = decimal_to_hexadecimal(num, 'x');
	if (result == NULL)
	{
		return ;
	}
	write(1, result, ft_strlen(result));
	write(1, "\n", 1);
	printf("%p\n", result);
}

int	main(void)
{
	int	n;
	int	*ptr;

	n = 42;
	ptr = &n;
	print_ptr(ptr);
	return (0);
}
