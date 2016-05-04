#include<stdio.h>
#include<conio.h>

int main(){
  int x,y,z=0;	
  scanf("%d%d",&x,&y);	
	
  if (x>y){	y++;
	for(;y<x;y++)
	{
	 if( y%5==3||y%5==2)
	printf("%d\n",y);
}}else if(x<y){x++;
	for (;y>x;x++)
	{ if(x%5==3||x%5==2)
       printf("%d\n",x);	 
}}
}
