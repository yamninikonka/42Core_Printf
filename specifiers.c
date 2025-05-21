
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char *ft_itoa(int value, char *str, int base) {
    char *rc = str;
    char *ptr;
    char *low;
    // Handle invalid base
    if (base < 2 || base > 36) {
        *str = '\0';
        return str;
    }

    // Handle negative numbers for base 10
    int sign = 0;
    if (value < 0 && base == 10) {
        sign = 1;
        value = -value;
    }

    ptr = str;
    do {
        int digit = value % base;
        *ptr++ = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
        value /= base;
    } while (value);

    if (sign)
        *ptr++ = '-';

    *ptr = '\0';

    // Reverse the string
    for (low = str, --ptr; low < ptr; ++low, --ptr) {
        char tmp = *low;
        *low = *ptr;
        *ptr = tmp;
    }
    return rc;
}

void print_ptr(void *ptr)
{
    unsigned long long int num = (unsigned long long int)ptr;
    char str[32];
    char *result = ft_itoa(num, str, 16);
    if (result == NULL)
    {
        return;
    }
    write(1, result, strlen(result));
    write(1, "\n", 1);
}


int main(void)
{
    int n = 42;
    int *ptr = &n;
    print_ptr(ptr);
    return 0;   
}