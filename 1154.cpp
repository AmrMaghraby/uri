#include<conio.h>
#include<stdio.h>

int main(){
	int x,count=0,z=0;
	double avg;
	while(true){
		
		scanf("%d",&x);
		if (x<0)break;
		z=z+x;
		count++;
		
	}
	avg=float(z)/count;
	printf("%.2lf\n",avg);
	getch();
}
