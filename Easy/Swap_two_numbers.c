#include<stdio.h>
int main(){
printf("enter a value of A :");int a,b;
scanf("%d",&a);
printf("enter a value of B :");
scanf("%d",&b);

printf("----before swapping----\n value of A is %d \n value of B is %d\n",a,b);

// WITH THIRD VARIABLE ( use one logic at time )


int temp;
temp=a;
a=b;
b=temp;

// WITHOUT THIRD VARIABLE ( use one logic at time )

a=a+b;
b=a-b;
a=a-b;

printf("----after swapping----\n value of A is %d \n value of B is %d\n",a,b);
	
	
	
	
	
return 0;
}