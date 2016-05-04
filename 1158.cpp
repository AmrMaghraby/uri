#include<conio.h>
#include<stdio.h>

int main(){
	int x,sum=0;;
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
		int y,z,count=1,sum=0;
		scanf("%d%d",&y,&z);
		 while(count<=z){
		if(y%2!=0){count++;sum=sum+y;}
		y++;}printf("%d\n",sum);
	}
  
}
