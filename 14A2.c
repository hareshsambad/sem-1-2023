#include<stdio.h>
void main()
{
	int n,i,a=0,b=0;
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
		if(arr[i]>0)
		{   
		
			a++;
		}
		else
		{
		
			b++;
		}
	
	}
		printf("positive number is : %d\n",a);
		printf("nagetive number is : %d",b);

}
