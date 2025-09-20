#include<stdio.h>
int main()
{
	printf("enter a range for finding prime number between them enter start and end :");
	int start,end,j;
	scanf("%d",&start);
	scanf("%d",&end);
	if(start==1 || start==0)
		start=2;
	for(int i=start;i<=end;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(j==i)
			printf("prime number %d\n",i);
		
	}
	
	
	return 0;
}