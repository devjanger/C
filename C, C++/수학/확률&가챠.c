#include <stdio.h>
#include <time.h>

typedef struct RandomStruct
{
	int num;
	
	int i;
	
	int win;
	
	int ran;
	
	int count;
		
} RAN;


int main(void)
{
	srand(time(NULL)); // 난수 생성 (시간을 기준으로)
	
	RAN R;
	
	R.win=0; // 당첨 횟수 0으로 초기화. 
	
	
	printf("가챠를 몇번 반복할까요?\n입력$> ");
	scanf("%d",&R.count);
	
	
	printf("\n\n확률을 골라주세요!\n\tex) 20, 40, 60, 80, 100\n입력$> ");
	scanf("%d", &R.ran);
	printf("입력하신 확률은 %d%%입니다.\n\n",R.ran);
	
	for(R.i=0;R.i<R.count;R.i++) // 10번 반복 
	{
		R.num = rand()%100; // 0~99까지 랜덤 숫자를 구합니다. 
		
		printf("[%d번째] %d\n",R.i,R.num);
		
		
		if(R.num < R.ran) // 랜덤 숫자가 골랐던 확률 숫자보다 작을 경우. 
		{
			printf("★ 당첨! = %d\n",R.num);
			R.win++;
		}
		
		
	}
	
	
	printf("\n당첨 횟수 = %d\n", R.win);
	
	
	return 0;
}

