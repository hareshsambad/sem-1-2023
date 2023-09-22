#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter value of a =");
	scanf("%d",&a);
	printf("enter value of b =");
	scanf("%d",&b);
	char op;
	printf("enter value of op =");
	scanf("\n%c",&op);
	if(op=='+'){
		c=a+b;
       printf("%d",c);

	}
	else if(op=='-'){
		c=a-b;
	   printf("%d",c);	
	}else if(op=='*'){
		c=a*b;
		printf("%d",c);
	}else if(op=='/'){
		c=a/b;
		printf("%d",c);
	}else{printf("invalide op");
	}
	}
