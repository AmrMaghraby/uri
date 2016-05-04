#include<math.h>
#include<stdio.h>

int main()
{
	int x,y,z,m;
	while(true){
	
	scanf("%d",&x);
    	if(x==0)break;
    scanf("%d%d",&y,&m);	
	z=sqrt(x*y*100/m);
	printf("%d\n",z);
}}
