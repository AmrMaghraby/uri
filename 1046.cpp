#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(){
	
	int hr,hs,he,ms,me,M;
	
	scanf("%d%d%d%d",&hs,&ms,&he,&me);
	
	hr = he - hs;
	M = me-ms;
	;
	 if ((M<0))
	{hr--;
    M=M+60;
    }
	if((hr<0)||((hr==0)&&(M==0)))
	{
		hr=24+hr;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hr,M);
		}else if (hr==0)
		{
		
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hr,M);
		}
		else if (hr>0){
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hr,M);
		}
		
		
	
		
	getch();
}


