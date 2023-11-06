#include<stdio.h>
int A(int,int,int);
void main()
{
	int a=0,b=3,c=1000,res;
	res=A(a,b,c);
	printf("%d",res);
	
}
int A(int a ,int b,int c)
{ 	
	if(a<b)
	{
		if(c<b)
		{
			return b;
		}
		else
		{
			return c;
		}
	}
		else
		{
			return a;	
		}
	
	
	
}
