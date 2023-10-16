#include<stdio.h>
void main()
{
	int n,i;
	printf("enter n element : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers : \n",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("normal order :");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		
	}
		printf("\nreverse order :");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",arr[i]);
		
	}
}
