#include<stdio.h>
#include<conio.h>
int main () {
  int x,z;
  scanf("%d",&x);
  for(int i=0;i<=10000;i++){
  	z=i%x;
  	if(z==2)
  	printf("%d\n",i);
  	}
  
getch();
}


