#include<conio.h>
#include<stdio.h>

int main(){
	int y,x,max;
	scanf("%d%d",&x,&y);
	max=x;
	if(x<y)
	max=y;
	
	printf("%d\n",max);
	getch();
}
