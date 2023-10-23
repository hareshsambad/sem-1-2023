#include<stdio.h>
void main()
{
	int a=3,b=4,c=0;
	int *m=&a;
	int *n=&b;
	c=*n+*m;
	printf("%d",c);
}
