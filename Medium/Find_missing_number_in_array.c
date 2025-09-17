#include<stdio.h>
int main()
{
	int arr[]={2,5,4,7,6};
	int n=5;
	//sorting logic
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
		
	}int k;
	printf("sorted array");
	for(int i=0;i<n;i++)
		printf("%d",arr[i]);
	
	for(int i=1,j=0;i<=n;i++)
	{
		if(arr[i]-1!=arr[i-1])
		{
			 k= arr[i]-1;
			break;
		}
	}
	printf("missing value is %d",k);
	return 0;

	//return 0;
}