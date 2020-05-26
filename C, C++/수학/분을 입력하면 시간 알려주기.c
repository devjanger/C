#include <stdio.h>

void main()
{
	int input=0;
	printf("분을 입력: ");
	scanf("%d",&input);
	
	int hour= input/60;
	int min = input%60;
	
	printf("%d분은 %d시 %d분이다.\n",input ,hour,min);
	
}

