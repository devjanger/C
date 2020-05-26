#include <stdio.h>

void main()
{
	int i,j,o;
	
	for(i=0;i<5;i++)
	{
		for(o=5;o>i;o--)
		{
			printf(" ");
		}
		
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

