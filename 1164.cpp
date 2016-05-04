#include<conio.h>
#include<stdio.h>

int main(){
	int x,sum;
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
		int N,sum=0;;
		scanf("%d",&N);
		 for(int z=1;z<N;z++)
		 {
		
		if( N % z ==0)sum=sum+z;
		
}      if(sum==N)printf("%d eh perfeito\n",N);
	    else printf("%d nao eh perfeito\n",N);
	}
}
