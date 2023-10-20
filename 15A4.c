#include<stdio.h>
void main()
{
	int i,n,m,count=0;
	printf("enter value of arr : ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("arr[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("serch element : ");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	if(i==m)
	{
	
	printf("%d",a[i]);
}
}
