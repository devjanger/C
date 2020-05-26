#include <iostream>
#include <stdio.h>
#include <conio.h> 
#include <windows.h>

int main(void)
{
	printf("key accumulator\n");
	char accumulator[128]={0,};
	
	

	
	
	
	int getkey=0; //변수 getkey 선언
	
	 while(1) //시간의 흐름
	
	 {

	
	  if(kbhit()==1) //조건문: 키를 감지, 키가 눌리면 실행
	  {
	
	   
	   
	
		for(int i=0;i<128;i++)
		{
			
			getkey = getch(); //문자를 입력 받아서 변수 getkey에 저장
			printf("[%d]<%c>\n",i,getkey); //getkey를 출력
			
			FILE *fp;
		
			fp=fopen("accumulator.txt","wt");
			if(fp==NULL)
			{
				printf("실패 종료.\n");
				return 0;
			}
			
			
			
			
			accumulator[getkey]++;
		

			for(int i=0;i<128;i++)
			{
				printf("[%c]: ",i);
				printf("%d",accumulator[i]);
				printf("\n");
				
				
				fprintf(fp,"%c: ",i);
				fprintf(fp,"%d\n",accumulator[i]);
			
			}				
			
	
		fclose(fp);		
		}
		
	
	
	
	  }
	
	  
	
	  //printf("<UnhitKeyboard>\n"); //키보드를 아무것도 누르지 않으면 출력
	
	  Sleep(100); //시간의 흐름을 늦춤
	
	 }
	

	
	
	
	
	return 0;
}
