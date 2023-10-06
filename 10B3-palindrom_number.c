#include<stdio.h>
void main()
{
	int i,n,temp,sum=0;
	printf("enter number = ");
	scanf("%d",&n);
	
	while(n>0)
	{
		temp=n%10;
		sum=sum*10+temp;
		n=n/10;

	
	}
		printf("%d\n",sum);
		if(sum==n)
		{
			printf("number is palidrom");
		}
		else
		{
			printf("number is not palidrom");
		}
}
