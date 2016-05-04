#include<stdio.h>
#include<conio.h>

int main(){
	
	int I=-1;
	int J=8;
	
    for (;I<11;J--){
      if (J==5){
       printf("I=%d J=%d\n",I,J); 
	   J=8;
	   }else if (J==7){
       I+=2;if (I<=9) printf("I=%d J=%d\n",I,J); }   
       else if(J==6){
	    printf("I=%d J=%d\n",I,J); 
	   }
}
getch();

}

