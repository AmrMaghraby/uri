#include<conio.h>
#include<stdio.h>

int main(){
	int x,count=0,position=0,min,xx;
	scanf("%d",&x);
	scanf("%d",&xx);min=xx;
	for (int i=1;i<x;i++)
	{
		scanf("%d",&xx);
		  count++;
		  if(xx<min){
		  position=count;
		min=xx;
	}	
	
	}
	
	printf("Menor valor: %d\nPosicao: %d\n",min,position);
	getch();
}
