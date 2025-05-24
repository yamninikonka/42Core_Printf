
#include "libftprintf.h"

void	validate_format(const char *format)
{
	if (format == NULL)
	{
		fprintf(stderr, "Error: Format string is NULL\n");
		return ;
	}
	// if (strlen(format) == 0)
	// {
	// }
}

// void	char_group(char *specifiers, va_list args)
// {
// 	if (specifiers[ft_strlen(specifiers) - 1] == 'c'):
// 		{
// 			// 'print character';
// 			ft_putchar_fd(va_arg(args, int), 1);
// 		}
// 	else:  // 's'
// 		{
// 			// 'print string';
// 			ft_putstr_fd(va_arg(args, char *), 1);
// 		}
// }

// void	int_group(char *specifiers, va_list args)
// {
// 	if (specifiers[ft_strlen(specifiers) - 1] == 'd'
// 		|| specifiers[ft_strlen(specifiers) - 1] == 'i'):
// 		{
// 			// 'implement code logic to print integer';
// 			ft_putnbr_fd(va_arg(args, int), 1);
// 			break ;
// 		}
// 	else:
// 		{
// 			// 'print unsigned decimal in base 10';
// 			ft_putnbr_fd((unsigned int)va_arg(args, int), 1);
// 			break ;
// 		}
// }
void	parse_args(char *specifiers, va_list args)
{
	printf("%s\n", specifiers);
	switch (specifiers[ft_strlen(specifiers) - 1])
	{
	case 'c':
	{
		// 'print character';
		ft_putchar_fd(va_arg(args, int), 1);
		break ;
	}
	case 's':
	{
		// 'print string';
		ft_putstr_fd(va_arg(args, char *), 1);
		break ;
	}
	// case 'p':
	// {
	// 	'print pointer address';
	// 	break ;
	// }
	case 'd':
	case 'i':
	{
		// 'implement code logic to print integer';
		ft_putnbr_fd(va_arg(args, int), 1);
		break ;
	}
	case 'u':
	{
		// 'print unsigned decimal in base 10';
		ft_putnbr_fd((unsigned int)va_arg(args, int), 1);
		break ;
	}
	case 'x':
	{
		// 'print hexadecimal lowercase format';
		ft_putstr_fd(decimal_to_hexadecimal(va_arg(args, int), 'x'), 1);
		break ;
	}
	case 'X':
	{
		// 'print hexadecimal uppercase format';
		ft_putstr_fd(decimal_to_hexadecimal(va_arg(args, int), 'X'), 1);
		break ;
	}
	default:
	{
		// 'raise error';
		write(1, "raise error", 11);
	}
	}
}
