#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("enter number = ");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("\n %d * %d",n,i);
        printf(" = %d \n ",sum=n*i);
        i++;
    }
}