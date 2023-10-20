#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("enter value of arr : ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("arr[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			count++;
		}
	}
	printf("nagetive elemnet : ");
	printf("%d",count);
}
