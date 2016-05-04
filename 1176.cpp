#include<iostream>
#include<stdio.h>

int main(){
	 long long T,count,n,limit,z,sum;
    std::cin >> T;
	for(int i=1;i<=T;i++)
    {

    std::cin >> n;
    
	limit=n-1;
	z=0,sum=1;
	if(n==0)sum=0;
	for(count=2;n>=count;count++)
	{long long y=sum;
   
	sum=sum+z;

    z=y;
}
std::cout << "Fib(" << n << ") = " << sum << "\n";
}
}
