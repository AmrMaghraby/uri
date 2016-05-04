#include<conio.h>
#include<stdio.h>

int main(){
	
	double x;
	scanf("%lf",&x);
	if (x<=2000)
	printf("Isento\n");
	else if ((x>2000)&&(x<=3000)) 
		printf("R$ %.2f\n",(x-2000)*0.08);
	else if ((x>3000)&&(x<=4500))
	 printf("R$ %.2f\n",(x-3000)*0.18+1000*0.08);	
		else if (x>4500)
	printf("R$ %.2f\n",(x-4500)*0.28+1000*0.08+1500*0.18);
	
	getch();
}
