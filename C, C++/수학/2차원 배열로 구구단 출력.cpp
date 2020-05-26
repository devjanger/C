#include <iostream>
#include <windows.h>


int main(void)

{
	int dan[10][10]={0,};
	
	int i=0;
	int j=0;
	
	for(i=1;i<10;i++)
	{
		
	
		for(j=1;j<10;j++)
		{
			dan[i][j]=i*j;
			printf("%d * %d = %d\n",i,j,dan[i][j]);
		}
		printf("\n");
	}


 return 0;

}
