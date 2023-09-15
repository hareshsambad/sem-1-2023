#include<stdio.h>
int main(){
	int a,b,c,P,Q;
		printf("enter number a = ");
	scanf("%d",&a);
		printf("enter number b = ");
	scanf("%d",&b);
		printf("enter number c = ");
	scanf("%d",&c);
	P=(a>b) ? (a) : (b);
	Q=P*c;
	printf("ans = %d",Q);
}
