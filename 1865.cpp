#include<conio.h>
#include<stdio.h>

int main(){
	
	int x;
	int c;
	char name[15];
	
	scanf("%d",&x);
	
	for(int i=0;i<x;i++)
	{
		scanf("%s",name);
	    scanf("%d",&c);

		if(name[0]=='T' && name[1]=='h' && name[2]=='o' && name[3]=='r')
		printf("Y\n");
		else printf("N\n");
	
	}
	getch();
	
}
