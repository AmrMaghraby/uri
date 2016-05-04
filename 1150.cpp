#include<conio.h>
#include<stdio.h>

int main(){
	int i,k,x,z,count=1;
	scanf("%d%d",&x,&z);
	while(z<=x)
	{
		scanf("%d",&z);	
	}
	k=x;
	for(i=x;i<=z;k++)
	{
	count++;
	i=i+k;}
	
	
	
	
	printf("%d\n",count);
	getch();
}
