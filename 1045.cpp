#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	double v[3],max;
    string z; 
	max=0;   
	scanf("%lf%lf%lf",&v[0],&v[1],&v[2]);
	
for (int i =0;i<3;i++){	
	  if(v[i]>max)
	    max=v[i];
}
   for(int j=0;j<3;j++){
	for(int i=0;i<3;i++ ){
	 if((v[i]!=max)&&(v[j]!=max)&&(i!=j)){
	  if (max>=v[i]+v[j]){
	printf("NAO FORMA TRIANGULO\n");
	return 0;
	}if((v[0]!=v[1])&&(v[1]!=v[2])&&(v[2]!=v[0])){
	 if (pow(max,2)==pow(v[i],2)+pow(v[j],2))
	z=  "TRIANGULO RETANGULO\n";
	else if(pow(max,2)>pow(v[i],2)+pow(v[j],2))
	z=  "TRIANGULO OBTUSANGULO\n";
	else z=  "TRIANGULO ACUTANGULO\n";	
}}}}
    cout<<z;
if ((v[0]==v[1])&&(v[1]==v[2])){
	if (max>=v[1]+v[2]){
	printf("NAO FORMA TRIANGULO\n");
	return 0;
	}
if (pow(v[0],2)==pow(v[1],2)+pow(v[2],2))
	z=  "TRIANGULO RETANGULO";
	else if(pow(v[0],2)>pow(v[1],2)+pow(v[2],2))
	z=  "TRIANGULO OBTUSANGULO";
	else z=  "TRIANGULO ACUTANGULO";
	cout<<z<<endl;
	printf(  "TRIANGULO EQUILATERO\n");	
}else if ((v[0]==v[1])||(v[1]==v[2])||(v[2]==v[0])){
	
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
    	if (max>=v[i]+v[j]){
	printf("NAO FORMA TRIANGULO\n");
	return 0;
	}else{
    	if((max!=v[i])&&(max!=v[j])){
		if (pow(max,2)==pow(v[i],2)+pow(v[j],2))
	z=  "TRIANGULO RETANGULO";
	else if(pow(max,2)>pow(v[i],2)+pow(v[j],2))
	z=  "TRIANGULO OBTUSANGULO";
	else z=  "TRIANGULO ACUTANGULO";   
}}
}}
cout<<z<<endl;
printf("TRIANGULO ISOSCELES\n");
}

getch();
}


