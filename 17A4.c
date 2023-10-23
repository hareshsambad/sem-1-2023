#include<stdio.h>
void main()
{
	int a=3,b=4,c=0;
	int *m=&a;
	int *n=&b;
	int *w=&c;
	*w=*m;
	*m=*n;
	*n=*w;
	printf("%d\n",*m);
	printf("%d",*n);
}
