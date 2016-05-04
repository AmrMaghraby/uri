#include<conio.h>
#include<stdio.h>
int main(){
	int N,x,count;
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
	scanf("%d",&x);
	if ((x>=10)&&(x<=20)){
		count++;
		
		
	}	
	}	
	printf("%d in\n%d out\n",count,N-count);
	getch();
}
