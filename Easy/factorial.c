#include<stdio.h>
int factrecursion(int n)
{
	int fact;
	if(n==0)
	return 1;
	else 
	fact=n*factrecursion(n-1);
	return fact;
}

int main()
{
	// iterative logic 

	printf("enter a number :");
	int n,fact=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is : %d\n",n,fact);

	// recursive logic
	printf("enter a number :");
	int nn;
	scanf("%d",&nn);	
	printf("factorial is %d is : %d\n",nn,factrecursion(nn));
	
	

	
return 0;
}