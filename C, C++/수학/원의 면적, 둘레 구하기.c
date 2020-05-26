#include <stdio.h>
#define Pi 3.14
void main()
{
	int r=0;
	float result=0;
	
	printf("원의 반지름을 입력하세요: ");
	scanf("%d",&r);
	
	result = r*r*Pi;
	printf("원의 면적: %f\n",result);
	
	result = r*2*Pi;
	printf("원의 둘레: %f\n",result);
}

