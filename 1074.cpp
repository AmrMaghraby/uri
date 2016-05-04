#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int N,x;
	std::string z;
	std::string m;
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
	   scanf("%d",&x);	
	if(x>0)
		z="POSITIVE";
		else if((x<0)&&(x!=0))
		z="NEGATIVE";
	if(((x%2)==0)&&(x!=0))
		m="EVEN";
		else if(((x%2)!=0)&&(x!=0))
		m="ODD";
	if(x==0)	
		cout<<"NULL"<<endl;
	else
		cout<<m<<" "<<z<<endl;		
	}
	getch();
	}
