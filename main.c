#include <stdio.h>
#include "ft_printf.h"

//Tests purpoise only
int main (void)
{
	char *str = "oi";
	int d = printf("original > %i %d %c %s %x %X %u %% %p\n", 42, 24, 65, str, 255, 255, 2147483647, str);
	int c = ft_printf("built-in > %i %d %c %s %x %X %u %% %p\n", 42, 24, 65, str, 255, 255, 2147483647, str);
	printf("%i %i\n", d, c);
	ft_printf("%i %i", d, c);
	return (0);
}
