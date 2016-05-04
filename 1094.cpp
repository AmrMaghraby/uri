#include<conio.h>
#include<stdio.h>

int main(){
	
	int x,c=0,r=0,s=0,total=0;
	char z;
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
	int N;
	scanf("%d %c",&N,&z);
    total+=N; 
	switch(z){
		case'R':r=r+N;break;
		case'C':c=c+N;break;
		case'S':s=s+N;break;
	}}
	printf("Total: %d cobaias\n",total);
	printf("Total de coelhos: %d\n",c);
	printf("Total de ratos: %d\n",r);
	printf("Total de sapos: %d\n",s);
	printf("Percentual de coelhos: %.2lf %%\n",(float(c)/total)*100);
	printf("Percentual de ratos: %.2lf %%\n",(float(r)/total)*100);
	printf("Percentual de sapos: %.2lf %%\n",(float(s)/total)*100);
	
	getch();
	
}
