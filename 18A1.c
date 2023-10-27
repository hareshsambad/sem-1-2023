#include<stdio.h>
int add(int,int);
void main()
{
	int a=6,b=4,res=0;
	res=add(a,b);
	printf("%d",res);		
}
int add(int a,int b)
{
	int res=0;
	res=a+b;
	return res;
}


