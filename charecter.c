#include<stdio.h>
void main(){
	char P;
	printf("enter value = ");
	scanf("%c",&P);
	(P>='a' && P<='z'||  P>='A' && P<='Z') ? printf("character") : printf("no charcter");
}
