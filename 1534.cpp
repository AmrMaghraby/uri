#include<conio.h>
#include<stdio.h>
 
int main(){
    int m,i=1,j=2,k=3,array[102],counter=1,buff=2,swap=1,temp,temp2,swap2;
  while(scanf("%d",&m) != EOF){
    ;
    int duff=m-1;swap2=m;
   
    int o=1,yarab;
   
   
    array[counter]=i;
    array[m]=j;
   
    while(counter<m-1)
{    counter++;
     array[counter]=k;
    }
    while(o<=m){
        printf("%d",array[o]);
        o++;
    }printf("\n");
   
    int count =0;
while(buff<=m )
    {
        count ++;
    
    if(count==(m/2))
    {
    	if(m%2==0)
    	{
    		array[count]=2;
			array[count+1]=1;
			 while(i<=m)
   {printf("%d",array[i]);
   i++;
   }printf("\n");
 
i=1;
			swap++;swap2--;duff--;buff++;
					}
    	
	else if(m%2 != 0)
   {
   	
   	array[duff+1]=3;
    array[count]=3;
   	array[count+1]=2;
    while(i<=m)
   {printf("%d",array[i]);
   i++;
   }printf("\n");
 
i=1;
    swap++;swap2--;duff--;buff++;
    
	array[swap]=1;
    array[duff+2]=2;
    
    
   }}
    temp = array[swap];
    array[swap] = array[buff];
    array[buff]=temp;

    temp2 = array[swap2];
   
    array[swap2] = array[duff];
    array[duff] = temp2;
   
 
    buff++;
    duff--;
    swap++;
    swap2--;
   
 i=1;
   while(i<=m)
   { if(m==2)break;
   printf("%d",array[i]);
   i++;
   }if(m!=2)printf("\n");
 
i=1;
}
 
 
 
 counter=1 ; buff=2 ;swap=1;
    
}}
