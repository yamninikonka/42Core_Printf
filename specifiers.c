
#include "ft_printf.h"

int	print_args(char *specifiers, va_list args)
{
	char	specifier;

	// printf("%s\n", specifiers);
	specifier = specifiers[ft_strlen(specifiers) - 1];
	if (specifier == 'c' || specifier == 's' || specifier == 'p')
	{
		// char_group(specifiers[ft_strlen(specifiers) - 1], args);
		return (char_group(specifiers[ft_strlen(specifiers) - 1], args));
	}
	else if (specifier == 'd' || specifier == 'i' || specifier == 'u')
	{
		// int_group(specifiers[ft_strlen(specifiers) - 1], args);
		return (int_group(specifiers[ft_strlen(specifiers) - 1], args));
	}
	else if (specifier == 'x' || specifier == 'X')
	{
		return (put_ints_in_hexa(specifiers[ft_strlen(specifiers) - 1], args));
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
