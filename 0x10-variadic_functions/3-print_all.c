#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	int i = 0, j;
	float l;
	char k;
	char *S;
	va_list arg;

	va_start(arg, format);

	while(format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				k = va_arg(arg, int);
				printf("%c", k);
				break;
			case 'i':
				j = va_arg(arg, int);
				printf("%i", j);
				break;
			case 'f':
				l = va_arg(arg, double);
				printf("%f", l);
				break;
			case 's':
				S = va_arg(arg, char*);
				if (S == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", S);
				}
				break;
		}
		if (format[i + 1] != '\0')
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
