#include<stdio.h>
#include<conio.h>

int main(){
	char x[]="LIFE IS NOT A PROBLEM TO BE SOLVED";
	int y;
	scanf("%d",&y);
	for(int i=0;i<y;i++)
	{
		printf("%c",x[i]);
	}
	printf("\n");
	getch();
}
