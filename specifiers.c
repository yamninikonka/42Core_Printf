
#include "ft_printf.h"

int	print_args(char *specifiers, va_list args)
{
	char	specifier;

	// printf("%s\n", specifiers);
	specifier = specifiers[ft_strlen(specifiers) - 1];
	if (specifier == 'c' || specifier == 's' || specifier == 'p')
	{
		// char_group(specifiers[ft_strlen(specifiers) - 1], args);
		return (ft_putchars(specifiers[ft_strlen(specifiers) - 1], args));
	}
	else if (specifier == 'd' || specifier == 'i' || specifier == 'u')
	{
		// int_group(specifiers[ft_strlen(specifiers) - 1], args);
		return (ft_putints(specifiers[ft_strlen(specifiers) - 1], args));
	}
	else if (specifier == 'x' || specifier == 'X')
	{
		return (ft_puthexaints(specifiers[ft_strlen(specifiers) - 1], args));
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
