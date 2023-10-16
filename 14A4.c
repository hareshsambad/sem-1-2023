#include<stdio.h>
void main()
{
	int i,n,max=0,min;
	printf("enter number of element : ");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++)
	{
			printf("enter arr[%d] : ",i);
			scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
			
		}
	}
		printf("max number is : %d ",max);
		min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
			
		}
	}	
	printf("\nmin number is : %d ",min);
}

