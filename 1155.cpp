#include<conio.h>
#include<stdio.h>

int main(){
	
	double z=0;
	for(int x=1;x<=100;x++){
		
		z=1/float(x)+z;
		
	}printf("%.2lf\n",z);
	
	getch();
}



