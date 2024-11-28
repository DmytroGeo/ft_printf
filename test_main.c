#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int i = 10;
	int j;
	int k;
	void *ptr;
	ptr = &i;
	// int i;
	// int j;
	//i = printf("My hexadecimal number is %p \n", ptr);
	//j = ft_printf("My hexadecimal number is %p \n", ptr);
	//printf("My funct: %d, OG: %d\n", j, i);
	j = printf("%p\n", ptr);
	k = ft_printf("%p\n", ptr);
	printf("OG: %d \n", j);
	printf("mine: %d \n", k);
	return 0;
}