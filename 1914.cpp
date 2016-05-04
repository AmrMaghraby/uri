#include<conio.h>
#include<stdio.h>

int main(){
	int x,y,z1,z2;
    char x1[10],y1[10],x2[10],y2[10];
	scanf("%d",&x);
		for(int i=0;i<x;i++)
	{
	
	scanf(" %s\n%s\n%s\n%s",&x1,&y1,&x2,&y2);
	scanf("%d%d",&z1,&z2);
	if((z1+z2)%2==0)
	 if(y1[0]=='P' && y1[1]=='A' && y1[2]=='R')
	   printf("%s",x1);
	 else 
	  printf("%s",x2);
   else if((z1+z2)%2 != 0)
   if(y1[0]=='I' && y1[1]=='M' && y1[2]=='P' && y1[3]=='A' && y1[4]=='R')
	   printf("%s",x1);
	 else 
	  printf("%s",x2);
   
   
   }
}
