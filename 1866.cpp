#include<conio.h>
#include<stdio.h>

int main(){
	int x,y;
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
	scanf("%d",&y);	
	if(y%2==0)
	printf("0\n");
	else 
	printf("1\n");
    }
getch();
}
