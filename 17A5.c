#include<stdio.h>
void main()
{
	int i,j;
	int a[2];

		
	for(i=0;i<2;i++)
	{
	
		printf("\n enter value [%d]",i);
		scanf("%d",&a[i]);
		
	}
		
	for(i=0;i<2;i++)
	{
	    int *n=&a[i];
	   	printf("\n enter value = %d",*n);
	}
}
	
