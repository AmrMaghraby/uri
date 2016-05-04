#include<conio.h>
#include<stdio.h>

int main(){
	
	double a,b,c,swap;
	
	double v[3];
	scanf("%lf%lf%lf",&a,&b,&c);
	
	v[0]=a;
	v[1]=b;
	v[2]=c;
	
	
	for (int i = 0;i<3 ;i++){
	
	 for (int z=1; z<3;z++){
	 
	  for(int j=0;j<3;j++)
     {
		if((v[0]+v[z]>v[j])&&(b+c>a)){
			swap=a+b+c;
			
		}else  {
		
			swap =0.5*(a+b)*c;
			printf("Area = %.1lf\n",swap);
	         
		getch();
		return 0 ;
		
		} 	
       
  
	
}
}
}
printf("Perimetro = %.1lf\n",swap);
getch();
}



