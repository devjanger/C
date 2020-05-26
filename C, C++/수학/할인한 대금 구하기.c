#include <stdio.h>

void main()
{
	int danga=0, gaesu=0, payment=0;;
	
	printf("단가=");
	scanf("%d", &danga);
	
	printf("매상 개수 = ");
	scanf("%d",&gaesu);
	
	if(gaesu >= 1000) // 주문 수량이 1000개 이상이면 20% 할인 
	{
		payment = (danga*gaesu)-((danga*gaesu) * 0.20 );
	}
	else
	{
		payment = (danga*gaesu)-((danga*gaesu) * 0.10 );
	}
	
	printf("대금 = %d\n",payment);
}

