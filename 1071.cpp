#include<conio.h>
#include<stdio.h>

int main(){
	
	int x,y;
	scanf("%d%d",&x,&y);
	int z=0;
	
	if (x>y){
	for(int i=y+1;i<x;i++){
	if((i%2)!=0)
	z=z+i;
		}
		}else
		{
			for(int i=x+1;i<y;i++){
			if((i%2)!=0)
			z=z+i;
			}
		}
			printf("%d\n",z);
		getch();
		}
