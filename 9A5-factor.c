#include<stdio.h>
int main()
{
    int i=1,n,ans;
    printf("enter value of number = ");
    scanf("%d",&n);
    printf("factor is = ");
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("%d, ",i);
        }
        i++;
    }
}