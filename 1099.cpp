#include<conio.h>
#include<stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
	  int x,z=0,y;
	  scanf("%d%d",&x,&y);
if(x==y)printf("%d\n",z);
	
	if(x>y){y+=1;
	for(;x>y;y++){
	if((y%2)!=0){
	z=y+z;
	}
}printf("%d\n",z);}
	if(x<y){x+=1;
	for(;x<y;x++){
	if((x%2)!=0){
	z=x+z;
	}
	
}printf("%d\n",z);}
	

	
	}
	getch();
}
