#include<conio.h>
#include<stdio.h>

int main(){
	int i=0,alchol=0,gasoline=0,diesel=0;
	while(i!=4){
		scanf("%d",&i);
		if(i==1)alchol++;
		if(i==2)gasoline++;
		if(i==3)diesel++;
	}
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",alchol);
	printf("Gasolina: %d\n",gasoline);
	printf("Diesel: %d\n",diesel);
	getch();
}

