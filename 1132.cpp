#include<stdio.h>
#include<conio.h>

int main(){
  int x,y,z=0;	
  scanf("%d%d",&x,&y);	
	
  if (x>y)	
	for(;y<=x;y++)
	{
	 if(y%13!=0)
	z=z+y;
}else if(x<y)
	for (;y>=x;x++)
	{ if(x%13!=0)
	 z=z+x;
} printf("%d\n",z);getch();
}
