
#include "ft_printf.h"

int	print_args(char *specifiers, va_list args)
{
	char	specifier;

	// printf("%s\n", specifiers);
	specifier = specifiers[ft_strlen(specifiers) - 1];
	if (specifier == 'c' || specifier == 's' || specifier == 'p')
	{
		char_group(specifiers[ft_strlen(specifiers) - 1], args);
		return (0);
	}
	else if (specifier == 'd' || specifier == 'i' || specifier == 'u'
		|| specifier == 'x' || specifier == 'X')
	{
		int_group(specifiers[ft_strlen(specifiers) - 1], args);
		return (0);
	}
	else
		return (-1);
}

// int	main(void)
// {
// 	int	n;
// 	int	*ptr;

// 	n = 42;
// 	ptr = &n;
// 	print_ptr(ptr);
// 	printf("\n%p\n", ptr);
// 	return (0);
// }
