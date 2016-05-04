#include<conio.h>
#include <stdio.h>

int main(){
	int x,even=0,E[5],O[5],odd=0;
	for(int i=0;i<=14;i++)
	{
	scanf("%d",&x);
	if(x%2==0)
	{even++;
    E[even]=x;
    }
	if(x%2!=0)
	{odd++;
	O[odd]=x;
    }
    if(even==5){int jj=0;
	for(int j=1;j<=5;j++)
	printf("par[%d] = %d\n",jj++,E[j]);
	even=0;}
    if(odd==5){ int jj=0;
    for(int j=1;j<=5;j++)
	printf("impar[%d] = %d\n",jj++,O[j]);
odd=0;}

    if(even + odd == 5 && i>=10)
{    
	int jj=0;
    for(int j=1;j<=odd;j++)
	printf("impar[%d] = %d\n",jj++,O[j]);
	 jj=0;
    for(int j=1;j<=even;j++)	
	printf("par[%d] = %d\n",jj++,E[j]);
	
}

}

getch();}
