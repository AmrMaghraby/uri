#include<conio.h>
#include<stdio.h>

int main(){
	
	int x,y;
	for(int i=1;i<=5;i++)
	{
	    scanf("%d",&x);	
		if ((x%2)==0)
		y++;
		
	}
	printf("%d valores pares",y);
	getch();
}
