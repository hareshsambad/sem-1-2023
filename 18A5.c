
#include<stdio.h>
int A(int,int);
int B(int,int);
void main()
{
	int a=1,b=3,res,res1;
	res=A(a,b);
	res1=B(a,b);
	printf("\nB = %d",a);
	printf("\nB = %d",b);
	
	printf("\nA = %d",res);
	printf("\nA = %d",res1);
	
}
int A(int a ,int b)
{
	int c=0;
	a=c;
	a=b;
	b=c;
	return a;
}
int B(int a,int b)
{
	int c=0;
	c=a;
	a=b;
	b=c;
	return b;
}
	
	
	
	
	

