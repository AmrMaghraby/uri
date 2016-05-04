#include<conio.h>
#include<stdio.h>

int main(){
	int x,y,min,z=0;

    for(int i=1;i>0;i++){	
    	scanf("%d%d",&x,&y);
	min=x;
	if(min>y)
	min=y;
	 if(x<=0||y<=0)
       break ;
	if(min==x){
    for(;min<=y;min++){
	printf("%d ",min);
	z=z+min;
    }}
    else if(min==y){
    for(;min<=x;min++)
	{
	printf("%d ",min);
	z=z+min;
    }}	
    printf("Sum=%d\n",z);z=0;
}
}
