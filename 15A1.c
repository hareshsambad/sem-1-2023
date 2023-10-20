#include<stdio.h>
void main()
{
	int n,i;
	printf("enter value of n : ");
	scanf("%d",&n);
	int A[n],B[n];
	
	for(i=0;i<n;i++)
	{
		printf("arr[%d] : ",i);
		scanf("%d",&A[i]);
	}
	
		
	for(i=0;i<n;i++)
	{
		B[i] = A[i];
	
	}
	printf("second arr : ");
		for(i=0;i<n;i++)
	{
		printf("%d",B[i]);
	
	}
}


