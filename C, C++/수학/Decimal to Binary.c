#include <stdio.h>

int main(void)
{
	int dec=129;
	
	int bin[8]={0};
	
	int i=0;
	
	int data=dec;
	
	for(i=0;i<8;i++)
	{
		bin[7-i] = data%2;
		
		data = data / 2;
	}
	
	for(i=0;i<8;i++)
	{
		printf("%d ",bin[i]);
	}

	return 0;
}
