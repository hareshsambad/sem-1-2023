#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("enter number = ");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
			sum=sum+i;
		}
		
		i++;
	}

	printf("sum = %d\n",sum);
	if(sum==n)
	{
		printf("number is perfect");
	}
	else
	{
		printf("number is not perfect");
	}
}

