#include <ctype.h>
#include <stdio.h>
#include "ft_isdigit.c"

int main()
{
	// printf("%d", 1); 
	
	for(int i = 32; i <= 63; i++)
		printf("%c -> isdigit: %d - ft_isdidgit: %d \n", i, isdigit(i), ft_isdigit(i));
	return (0);

}
