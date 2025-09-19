#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int size=5;
	int rotate=2;
	printf("---GIVEN ARRAY---\n");
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
	
	
	for(int j=0;j<rotate;j++)
	{
		int last=arr[size-1];
		for(int i=size-1;i>=0;i--)
		{
			arr[i]=arr[i-1];
		}
		arr[0]=last;
	}
	printf("\n---ROTATED ARRAY BY %d POSITION---\n",rotate);
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
	
	
	
	return 0;
}