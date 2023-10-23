#include<stdio.h>
void main()
{
	int i,j;
	int a[2][2],b[2][2];
		
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("\n %d enter value [%d][%d]",i,i,j);
		scanf("%d",&a[i][j]);
		
		}
	}
	printf("\n");
for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("\n %d enter value [%d][%d]",i,i,j);
		scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("\n[%d][%d] enter value= %d",i,j,a[i][j]+b[i][j]);
		}
	}
	
}	
