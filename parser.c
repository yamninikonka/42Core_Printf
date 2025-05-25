
#include "ft_printf.h"

int	parse_format_specifier(const char *format, const char *specifier_start_pos,
		va_list args)
{
	char	*parsed_embedded_specifier;
	int		written_chars;

	parsed_embedded_specifier = NULL;
	if (validate_format_specifier(*format) >= 0)
	{
		parsed_embedded_specifier = ft_substr(specifier_start_pos, 0,
				(ft_strlen(specifier_start_pos) - ft_strlen(format)) + 1);
		written_chars = print_args(parsed_embedded_specifier, args);
		free(parsed_embedded_specifier);
		parsed_embedded_specifier = NULL;
		// return (written_chars);
	}
	else
		written_chars = -1; // signals error
	return (written_chars);
}
