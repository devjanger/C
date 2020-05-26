#include <stdio.h>
int main(void)
{
	int i=0;
	int j=0;
	int k=0;
	
	for(i=0;i<5;i++)
	{
	for(j=5;j>i;j--)
	{
		printf(" ");
	}
	for(k=0;k<=i;k++)
	{
		printf("*");
	}
	for(k=0;k<i;k++)
	{
		printf("*");
	}
	printf("\n");	
	}
	
	
	

	for(i=0;i<=5;i++)
	{
		for(k=0;k<i;k++)
		{
			printf(" ");
		}
		for(j=5;j>i;j--)
		{
			printf("*");	
		}
		for(j=5;j>=i;j--)
		{
			printf("*");	
		}
		
		printf("\n");
	}	

	
	return 0;
}

