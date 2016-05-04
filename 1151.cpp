#include<conio.h>
#include<stdio.h>

int main(){
	
	int x,z[10000],count=2,sum=0,test,test1;
	scanf("%d",&x);
	if(x==0||x==1){
	printf("%d",z[0]);
    return 0;
	}
	z[0]=0;z[1]=1;
	printf("%d %d",z[0],z[1]);
	for(int i=2;count<x;i++){
	test1=i-2;
	test=i-1;
	if(test>=0)
	z[i]=z[test1]+z[test];
    count++;
    printf(" %d" ,z[i]);
}printf("\n");
	 		
getch();}
