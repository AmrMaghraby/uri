#include<conio.h>
#include<stdio.h>

int main(){
	int T,count=0,flag=0;
	int Pa,Pb;
	double Ga,Gb;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
    {count=0;
    	scanf("%d%d%lf%lf",&Pa,&Pb,&Ga,&Gb);
    
		
		while(Pa <= Pb)
         {
		
    	Pa+=Pa*(Ga/100.0);;
    	
		Pb+=Pb*(Gb/100.0);;
    	
    	count++;
    if(count>100){ flag=1;   break;
	}  
	
	}if(flag==1)
	printf("Mais de 1 seculo.\n");else
	printf("%d anos.\n",count);
	flag=0;
	}
getch();
} 
