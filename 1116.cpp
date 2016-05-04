#include<conio.h>
#include<stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
	int x,y;
	scanf("%d%d",&x,&y);
	if(y==0)printf("divisao impossivel\n");
	else printf("%.1lf\n",float(x)/y);
	}
}
