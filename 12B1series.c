#include<stdio.h>
void main()
{
	int i,n,sum=0,j;
	printf("enter value = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		sum=sum+j;
		}
		
	}
		printf("sum = %d",sum);
}

