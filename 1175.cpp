#include<conio.h>
#include<stdio.h>

int main(){
	int N[20],i;
	for(i=0;i<=19;i++)
	scanf("%d",&N[i]);
	
	int y=1,z;
	
    for(i=0;i<=19;i++)
      {
	  z=20-y;
      y++;
    printf("N[%d] = %d\n",i,N[z]);

}getch();}
