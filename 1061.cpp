#include<conio.h>
#include<stdio.h>
int main(){
	int v[4],x[4],D[4];
	scanf("Dia %d", &v[0]);
    scanf("%d : %d : %d\n", &v[1], &v[2], &v[3]);
    scanf("Dia %d", &x[0]);
    scanf("%d : %d : %d", &x[1], &x[2], &x[3]);


	for(int i=0;i<=3;i++)
	{
		D[i]=x[i]-v[i];
	 if ((D[i])<0){
	 	if(i==1)
	 	D[i]=D[i]+24; else
	 	D[i]=D[i]+60;
	 	int k;int z=i;
	 	k=z-1;
	 	D[k]=(x[k])-(v[k]);
  	    --D[k];
	if (D[k]<0){
	   if(k==1)
	 	D[k]=D[k]+24;else D[k]=D[k]+60;
	 	k -= 1;
	 	--D[k];
	}}}
	printf("%d dia(s)\n",D[0] );
    printf("%d hora(s)\n",D[1] );
    printf("%d minuto(s)\n",D[2] );
    printf("%d segundo(s)\n",D[3] );		
getch();
	}
