#include<stdio.h>
#include<conio.h>
#include<math.h>

int main ()
{
	double x;
	double test1,test2;
	int z,y,m,n,b,d,e,f;
	x=y=z=m=n=b=d=e=f=0;

   
	scanf("%lf",&x);

 test1=x-int(x);
    


	
	if (int(x)<100){
		z=int(x)%10;
	}else {
		z=int(x)%(100);
	}
	
	
	
	y=(int(x)-z)/100;
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",y);
	
	
	if (x<100)
	{m=z=x;
}
	if(z>=50){
		m=z-50;
	    printf("1 nota(s) de R$ 50.00\n");	
	}else{
		printf("0 nota(s) de R$ 50.00\n");
	m=z;
	};

	
	if(m>=20){
		
		int count0=0;
		while (m>=20){
			m=m-20;
			count0++;
		}
		
		printf("%d nota(s) de R$ 20.00\n",count0++);
	}else{printf("0 nota(s) de R$ 20.00\n");
	
	};
	
	if(m>=10){
		int count00=0;
		while (m>=10){
			m=m-10;
			count00++;
		}
		printf("%d nota(s) de R$ 10.00\n",count00);
	}else{printf("0 nota(s) de R$ 10.00\n");
	
	}
	
	if(m>=5){
		int count000 = 0 ;
		while (m>=5){
			m=m-5;
			count000++;
		}
		
		printf("%d nota(s) de R$ 5.00\n",count000);
	}else{printf("0 nota(s) de R$ 5.00\n");
	
	}
	
	if (m>=2){
		int count0000=0;
		while (m>=2){
			m=m-2;
			count0000++;
		}
		
		printf("%d nota(s) de R$ 2.00\n",count0000);
	}else{printf("0 nota(s) de R$ 2.00\n");
	
	}

   printf("MOEDAS:\n");
   
    int count = 0;
    
	if (m>=1){
		while (m>=1){
			m=m-1;
			count++;
		}
		
		printf("%d moeda(s) de R$ 1.00\n",count);
	}else{printf("0 moeda(s) de R$ 1.00\n");
	f=e;
	}
	
	
	
	double tt,xx,yy,zz,ee,ff,gg;

	int count1=0;
	
	if(test1>=0.50){
	
       while(test1>=0.5){
	   	
		test1=test1-0.5;
	    count1++;	
}
      printf("%d moeda(s) de R$ 0.50\n",count1++);
	}else{
		printf("0 moeda(s) de R$ 0.50\n");
		
	
	};
	int count2 =0 ;
	if(test1>=0.25){
		
		
		 while(test1>=0.25){
	   	
		test1=test1-0.25;
	    count2++;	
}
		
	    printf("%d moeda(s) de R$ 0.25\n",count2++);	
	}else{
		printf("0 moeda(s) de R$ 0.25\n");
	
	
	};
	int count3 =0;
	if(test1>=0.10){
	
		
		 while(test1>=0.10){
	   	
		test1=test1-0.10;
	    count3++;	
}
				
	    printf("%d moeda(s) de R$ 0.10\n",count3);	
	}else{
		printf("0 moeda(s) de R$ 0.10\n");
		
	
	};

;
    
    
    test1=test1*100;
 int count4 =0;
	if(test1 >= 5){
		
		 while(test1>=5){
	   	
		test1=test1-5;
	    count4++;	
}
		
	    printf("%d moeda(s) de R$ 0.05\n",count4);	
	}else{
		printf("0 moeda(s) de R$ 0.05\n");
		
	
	};	 

	int count5 =0;
	
	
	if (test1 >= 1){		    
	
		 while(test1 >= 1){
	   	
		test1=test1-1;
	    count5++;	
}
		
		
		;
		printf("%d moeda(s) de R$ 0.01\n",count5);
	}else { printf("0 moeda(s) de R$ 0.01\n");
	}
	
	
	
	
	
	
	
	getch();

	
	
}
