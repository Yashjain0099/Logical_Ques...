#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,4,4,5,6,6,7};
	int n=10,count=1;
	int majority;
	for(int i=0;i<10;i++)
	{
		
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			++count;
		}
		
		if(count>n/2)
			return printf("majority elemnet is %d :",arr[i]);
		if(count>majority)
			majority=arr[i];
		count=1;
	}
	printf("majority is %d",majority);
	
	return 0;
}