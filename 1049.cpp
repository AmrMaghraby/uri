#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	
	string x,y,z;
	cin>>x>>y>>z;
	
	if (x=="vertebrado")
	{
	  if (y=="ave") 
     	{
     		if(z=="carnivoro")
     		{
			 printf("aguia\n");
     		}else if (z=="onivoro"){
			  printf("pomba\n");
			 }
     		
	  }else if(y=="mamifero")
	{  
	        if (z=="onivoro"){
	        	 printf("homem\n");
			}	else if (z=="herbivoro"){
				 printf("vaca\n");
			}
	}
	}
	else if(x=="invertebrado")
    {
         if (y=="inseto"){
             if (z=="hematofago")
	        {
	        	 printf("pulga\n");
			}else if (z=="herbivoro")
			{
				 printf("lagarta\n");
			}
		 }else if (y=="anelido")
		 	{
			
			}else if (z=="hematofago"){
			 printf("sanguessuga\n");	
			}else if (z=="onivoro"){
			 printf("minhoca\n");
			}
	} 	
	
	getch();
}
