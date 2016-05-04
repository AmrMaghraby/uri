#include<conio.h>
#include<stdio.h>

int main(){
	int x,z,y;
	scanf("%d",&x);
	z=x;
for(int i=1;i<x;i++){
	
    y=x-i;
	z=z*y;
	
	
}printf("%d" , z);	
	
	getch();
}
