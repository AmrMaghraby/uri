#include<stdio.h>
#include<conio.h>
#include<math.h>
#define EPS 1e-9
bool isEqual(double x, double y){
	return (fabs(x - y) < EPS);
}
int main(){
	
	double i=0;
	double J=1,z=4;
	
    for (;i<=2;J++){
        if(J==z)
	 {
	 	i+=0.2;
	 	J-=3;
	 	J+=0.2;
	 	z=J+3;
	 	}
	 	if(i>2)return 0;
	if(isEqual(i,0)||isEqual(i,1)||isEqual(i,2))
	printf("I=%d J=%d\n",int(round(i)),int(round(J)));
	
	else
	
	  printf("I=%.1lf J=%.1lf\n",i,J);
getch();	 
  }

}

