#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	
  double x,y,z,s,zz;
  int k;
    	
 scanf("%lf",&x); 	
 k=x;

if (x>60*60){
y=x;
 while(y>=60*60){
 	x=x/3600.0;
    y=x;
 }
 z=y-int(y) ;
 z=z*60;
 zz=z-int(z);
 zz=zz*60;
}else{
y=x;
 while (y>=60){
 x=x/60.0;
    y=x;	
 }
z=y-int(y) ;
 z=z*60; 
}
 	if (k<60*60)
 	{
 	s=z;
 	z=y;
 	y=00;	
 		
	 }else {
	 	s=zz;
	 	
	 }
 ;if (k<10){
 s=k;y=z=0;}
 
 
 printf("%d:%d:%.0lf\n",int(y),int(z),s);
 getch();	
	
}
