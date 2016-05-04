#include<stdio.h>
#include<conio.h>
int main(){
	int x,sum=0,N,aux;
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
		int N,sum=0,aux=0;
		scanf("%d",&N);
		if (N==1||N==0)printf("%d nao eh primo\n",N);
		if(N==2)printf("%d eh primo\n",N);
		for(int z=2;z<N;z++)
		{
			sum=N%z;
			aux+=sum;
	    if(sum==0){printf("%d nao eh primo\n",N);aux=0;break;}		
		}
	
			if(aux!=0)printf("%d eh primo\n",N);
}
getch();}
