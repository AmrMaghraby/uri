#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int x,z=0,i;
	int count= 0;
	
   int y[3];
   char a[10];
   
   
	while (count<3){
	
	for(i=0;i<3;i++)
    { 
	gets(a);
    
	if( a[0] == 'c'){
    printf("%d \n",z) ;
    z=0;count++;
	y[0]=y[1]=y[2]=0;
	break;
	}else if (a[0] == '*')
                y[i]=1;
      else if (a[0] == '-')
	           y[i] =0;
   else y[i]=0;
   }
      x=2;
      
     for(i=0;i<3;i++)
    { 
   
	  z= y[x]*pow(2,i)+z;
      x--;}
    
    
    if (count==3) return 0 ;
	
 
   }}
