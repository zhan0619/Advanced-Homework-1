#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char n;
	for (n=65; n<=90; n++)
	{
		printf("%c ",n);
	}
	
	printf("\n");
	for (n=97; n<=122; n++)
	{
		printf("%c ",n);
	}
	printf("\n");
	system ("pause");
	return 0;
}
