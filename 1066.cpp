#include<conio.h>
#include<stdio.h>

int main(){
	
	int x;
	int count1,count2,count3,count4;
	count1=count2=count3=count4=0;
	for(int i=1;i<=5;i++)
	{
		scanf("%d",&x);
		if (x>0)
		count1++;
		if(x<0)
		count2++;
		if((x%2)==0)
		count3++;
		else
		count4++;
	}
	printf("%d valor(es) par(es)\n",count3);
	printf("%d valor(es) impar(es)\n",count4);
    printf("%d valor(es) positivo(s)\n",count1);
    printf("%d valor(es) negativo(s)\n",count2); 
   
	
	getch();
}
