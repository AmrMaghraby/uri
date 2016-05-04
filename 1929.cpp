#include<conio.h>
#include<stdio.h>

int main(){
	int x[5],z=0;
	for(int i=0;i<4;i++)
	{
		scanf("%d",&x[i]);
	}
	
	for(int i=1;i<4;i++)
	{
		
		z=x[0]+x[i];
	for(int j=1;j<4;j++)	
		{//14 40 12 60
		if(j==i)j++;
		if(z>x[j])
		printf("S\n");
	    else printf("N\n");
	}
}
getch();
}
