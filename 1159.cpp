#include<conio.h>
#include<stdio.h>

int main(){

	
		int y,count=1,sum=0;
		
		
		 while(true){
		scanf("%d",&y);
		int sum =0,count=1;
		
		if(y==0)break; 	
		 	for(;count<=5;){
			 
		if(y%2==0){count++;sum=sum+y;}
		y++;}
  printf("%d\n",sum);}
  getch();
}
