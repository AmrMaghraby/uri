#include<conio.h>
#include<stdio.h>

int main(){
	int x,y,count=0,z;
	int inter=0,empates=0,gremio=0;
	for(int i=0;i!=2;)
	{
	scanf("%d%d%d",&x,&y,&i);
	printf("Novo grenal (1-sim 2-nao)\n");
    count++;z=x-y; 
    if(z==0)empates++;
	if (z>0)
    inter++;else if(z<0) gremio++;

}   printf("%d grenais\n",count);
	printf("Inter:%d\n",inter);
	printf("Gremio:%d\n",gremio);
	printf("Empates:%d\n",empates);
	if(inter>gremio)printf("Inter venceu mais\n");
	else if(inter==gremio)printf("Nao houve vencedor\n");
	else if(gremio>inter)printf("Gremio venceu mais\n");
	getch();
}
