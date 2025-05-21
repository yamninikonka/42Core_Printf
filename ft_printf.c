#include <stdarg.h>
#include <unistd.h>

void    ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format)
    {
        if(*format == '%')
        {
            format++;
            switch(*format)
            {
                case 'c':
                {
                    'print character';
                    ft_putchar_fd(va_arg(args, char), 1);
                    break;
                }
                case 's':
                {
                    'print string';
                    ft_putstr_fd(va_arg(args, char *), 1);
                    break;
                }
                case 'p':
                {
                    'print pointer address';
                    break;
                }
                case ('d' || 'i'):
                {
                    'implement code logic to print integer';
                    ft_putnbr_fd(va_arg(args, int), 1);
                    break;
                }
                case 'u':
                {
                    'print unsigned decimal in base 10';
                    ft_putnbr_fd((unsigned int)va_arg(args, int), 1);
                    break;
                }
                case 'x':
                {
                    'print hexadecimal lowercase format';
                    hexadecinmal(va_arg(args, int), letter_size='x');
                    break;
                }
                case 'X':
                {
                    'print hexadecimal uppercase format';
                    hexadecinmal(va_arg(args, int), letter_size='X');
                    break;
                }
                case '%':
                {
                    write(1, "%", 1);
                    break;
                }
                default:
                {
                    'raise error';
                }
            }
        }
        else
        {
            write(1, format, 1);
        }
        format++;
    }
    va_end(args);

}
