#include<stdio.h>
int res(int , int);
void main()
{
	
	int x,y,d,f;
	printf("enter value =  ");
	scanf("%d",&x);
	printf("enter value = ");
	scanf("%d",&y);
	d=res(x,y);
	f=res1(x,y);
	printf("min = %d",f);
	printf("\nmax = %d",d);
	
}
int res(int a,int b)
{
	int c,e;
	if(a<b)
	{
		e=a;
		c=b;
		return c;
	}
	else
	{
		e=b;
		c=a;
		return c;
	}
}
	int res1(int a,int b)
{
	int c,e;
	if(a<b)
	{
		e=a;
		c=b;
		return e;
	}
	else
	{
		e=b;
		c=a;
		return e;
	}
}

