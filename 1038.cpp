#include<conio.h>
#include<stdio.h>

int main(){
	
	int x,z;
	double y;
	scanf("%d%d",&x,&z);
	
	if(x==1){
		y=4.0;
		y=y*z;
			printf("Total: R$ %.2lf\n",y);
		
	}else if(x==2){
	     y=4.5;
	   	y=y*z;
	   	printf("Total: R$ %.2lf\n",y);
		
	}else if(x==3){
		
		y=5;
		y=y*z;
		printf("Total: R$ %.2lf\n",y);
		
	}else if(x==4)
	{
		y=2;
		y=y*z;
			printf("Total: R$ %.2lf\n",y);
	} if(x==5)
	{
		y=1.5;
		y=y*z;
			printf("Total: R$ %.2lf\n",y);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch();
	
	
	
	
	
}
