#include<stdio.h>
void main()
{
	int i,j;
	int a[10][2];
	for(i=0;i<10;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("\n %d enter value [%d][%d]",i,i,j);
		scanf("%d",&a[i][j]);
		
		}
	}
for(i=0;i<10;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("\n%d enter value= %d",i,a[i][j]);
		
		}
	}
}
		


	
	
