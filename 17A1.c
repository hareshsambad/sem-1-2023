#include<stdio.h>
void main()
{
	int x=2;
	float y=3;
	char w='w';
	double a=6;
	
	int *n=&x;
	float *m=&y;
	char *v=&w;
	double *b=&a;
	
	printf("\n%d",x);
	printf("\n%d",&x);
	printf("\n%d",*n);
	
	
	printf("\n%f",y);
	printf("\n%f",&y);
	printf("\n%f",*m);
	
	printf("\n%c",w);
	printf("\n%d",&w);
	printf("\n%c",*v);
	
	printf("\n%lf",a);
	printf("\n%d",&a);
	printf("\n%lf",*b);

	
		
}
