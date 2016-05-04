#include<conio.h>
#include<stdio.h>

int main(){
	int x,max,pos;
	scanf("%d",&x);
	max=x;
	for(int i=2;i<=100;i++)
	{
		scanf("%d",&x);
	if	(x>max){
		max=x;
		pos=i;}
		
	}
	printf("%d\n%d\n",max,pos);
getch();
}
