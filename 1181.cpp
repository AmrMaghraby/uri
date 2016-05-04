#include<conio.h>
#include<stdio.h>

int main(){
	double M[12][12];
	double sum=0.0;
    int x;
	char c;
    scanf("%d",&x);
    scanf(" %c",&c);
    for(int i=0;i<12;i++){
      for(int j=0;j<12;j++)
        {
		scanf("%lf",&M[i][j]);
    if(i==x){
		sum=sum+M[i][j];
}}}

if(c=='S') printf("%.1lf\n",sum);
if(c=='M') printf("%.1lf\n",sum/12.0);
getch();
}
