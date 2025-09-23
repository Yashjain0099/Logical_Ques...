#include<stdio.h>
int maxsubarray(int arr[],int size)
{
	int max=arr[0],sum=0;
	int start=0,end=0;
	for(int i=0;i<size;i++)
	{
		sum=0;
		for(int j=i+1;j<size;j++)
		{
			sum=sum+arr[j];
			if(sum>max)
			{
				max=sum;
				start=i;
				end=j;
				//printf("index 0f i %d and j is %d and sum is %d",i,j,sum);
			}
		}
		
	}
	printf("maxsub array is from index %d to %d is %d",start,end,max);
}
int main()
{
	int arr[]={2, 3, -8, 7, -1, 2, 3};
	maxsubarray(arr,7);
	return 0;
}

