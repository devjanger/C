#include <windows.h>
#include <stdio.h>
#include <iostream>

int main(void)
{
	char input=0;
	

	
	int array[10]={0,}; // 1
	int count[10]={0,}; // 1
	
	
	for(int i=0;i<10;i++) // 1
	{
		scanf("%d",&input);
		
		for(int j=0;j<11;j++) // 뺑도는거 
		{
	
			if(j==10)
			{
				array[i]=input;
				count[i]++;
				printf("array[%d]=%d\n",i,input);
				printf("끝까지 없다.\n");
				break;
			}	
			
			if(input==array[j]) // 입력한게 어레이랑 같냐? 예 1 == 0 
			{
				printf("탈출 입력: %d == 어레이[j]: %d \n",input,array[j]);
				count[j]++;
				break;
			}
			
	

		}
		
	}
	
	for(int i=0;i<10;i++)
	{
		printf("%d: ",array[i]);
		printf("%d\n",count[i]);
	}
	
	
}
