#include<stdio.h>
int main()
{
    int i=1,n,sum=1;
    printf("enter value of number = ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum*i;
        i++;
    }
    printf("ans = %d",sum);
}