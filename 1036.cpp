#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(){
  double a,b,c,z[3];	
  scanf("%lf%lf%lf",&a,&b,&c);
  if (a==0){
    printf("Impossivel calcular\n");	
  	return 0;}
    z[0] = pow(b,2)-4*a*c;	
	if (z[0]>0)
	z[0] = sqrt(z[0]);
	else {
	printf("Impossivel calcular\n");
	return 0 ;}
	z[1]=(-b+z[0])/(2*a);
	z[2]=(-b-z[0])/(2*a);
	
	printf("R1 = %.5lf\n",z[1]);
	printf("R2 = %.5lf\n",z[2]);
	getch();
	
	
}
