#include<stdio.h>
float si(float,float,float);
void main()
{
	float p=1000,r=5,t=3;
	float res;
	res=si(p,r,t);
	printf("simple interst = %f",res);
	
}
float si(float p ,float r,float t)
{ 	
	float C;
	C=p*r*t/100;
	return C;
}
