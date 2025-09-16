#include<stdio.h>
int fibonaccirecursive(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fibonaccirecursive(n-1)+fibonaccirecursive(n-2);
	
}
int main()
{
	//iterative logic
	/*
	int first=0,next=1,n;
	printf("enter a digit");
	scanf("%d",&n);
	printf("%d\n%d\n",first,next);

	for(int i=0 ;i<=n;i++)
	{
		int temp=first;
		first=next;
		next=next+temp;
		printf("%d\n",next);
		
	}
	*/
	
	// recursive logic

	int n;
	printf("enter a digit");
	scanf("%d",&n);
	
	for(int i=0;i<n+3;i++)
	printf("%d\n",fibonaccirecursive(i));
	printf("\n");
	return 0;
}