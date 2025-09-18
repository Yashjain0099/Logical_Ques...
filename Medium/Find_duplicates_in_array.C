#include<stdio.h>
int main()
{
	int arr[]={3,5,6,3,6,7,9,9};
	int n=8;
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
	
	printf("sorted array");
	for(int i=0;i<n;i++)
		printf("%d",arr[i]);
	
	int j,i;
	int ans[n];
	for(i=1,j=0;i<n;i++)
	{
		if(arr[i]==arr[i-1])
		{
			ans[j]=arr[i];
			j++;
		}	
	}
	
	for(int i=0;i<j;i++)
	{
		printf("%d\n",ans[i]);
	}
	
	
	return 0;
}