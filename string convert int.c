#include<stdio.h>
#include<stdlib.h>
void main(){
	char A[1000];
	int c;
	printf("enter value = ");
	scanf("%s",A);
	
		printf("enter 1 for int,\n 2 for float = ");
	scanf("%d",&c);

	int v = atoi(A);
	float w = atof(A);
		
		switch(c){
		
		case 1 : printf("%d \n",v);
		break;
		
		case 2 : printf("%f",w);
		break;
	}
	}

