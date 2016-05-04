#include<conio.h>
#include<stdio.h>

int main(){
	int N,z;
	scanf("%d",&N);z=1;
	for(int i=1;i<=N;i++)
	{
		printf("%d ",z++);
		printf("%d ",z++);
		printf("%d PUM\n",z++);
		z++;
		
	}getch();
}
