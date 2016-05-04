#include<conio.h>
#include<stdio.h>
int main(){
	double x,z;
	scanf("%lf",&x);
	if (x<=400.00)
	{
		z=x*(0.15);
	    printf("Novo salario: %.2f\n",z+x);
		printf("Reajuste ganho: %.2f\n",z);
		printf("Em percentual: 15 %%\n");
	}else if ((x>400.00)&&(x<=800.00))
	{
	    z=x*(0.12);
	    printf("Novo salario: %.2f\n",z+x);
		printf("Reajuste ganho: %.2f\n",z);
		printf("Em percentual: 12 %%\n");	
	}else if ((x>800.00)&&(x<=1200.00))
	{
		z=x*(0.10);
	    printf("Novo salario: %.2f\n",z+x);
		printf("Reajuste ganho: %.2f\n",z);
		printf("Em percentual: 10 %%\n");
	}else if ((x>1200)&&(x<=2000))
	{
		z=x*(0.07);
	    printf("Novo salario: %.2f\n",z+x);
		printf("Reajuste ganho: %.2f\n",z);
		printf("Em percentual: 7 %%\n");
	}else if(x>2000){
		z=x*(0.04);
	    printf("Novo salario: %.2f\n",z+x);
		printf("Reajuste ganho: %.2f\n",z);
		printf("Em percentual: 4 %%\n");
	}
	getch();
}
