#include <windows.h>
#include <stdio.h>

int main(void)
{
	int a=0;
	int b=0;
	int i=0;
	int toggle=0;
	
	printf("공약수 계산기\n"); 
	
	printf("비교할 수를 입력\nA: ");
	scanf("%d",&a);
	printf("B: ");
	scanf("%d",&b);
	
	int min;
	if(a>=b)
	min=b;
	else
	min=a;
	
	printf("최소 값은: %d\n",min);
	

	for(i=1;i<=min;i++)
	{
		
		if(a % i == 0 && b % i == 0)
		{
		printf("\n두 수의 공약수는 :%d \n",i);
		
		toggle++;
		}
		

		
	}

	if(toggle==1)
	printf("\n[두수는 서로소!]\a\n");
	system("pause");
	return 0;
}
