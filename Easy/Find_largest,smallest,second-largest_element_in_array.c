#include<stdio.h>
int main()
{
	int arr[]={8,6,9,3,98,2,9,56,8,32,6565,984};
	int n=12;
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				arr[i]=arr[i]+arr[j];
				arr[j]=arr[i]-arr[j];
				arr[i]=arr[i]-arr[j];
			}
		}
	}
	int largest=arr[n-1];
	int smallest=arr[0];
	int secondLargest=arr[n-2];
	
	printf("largest value is %d \nsmallest value is %d \nsecond largest value is %d",largest,smallest,secondLargest);
	
			
	
	
	
	return 0;
}