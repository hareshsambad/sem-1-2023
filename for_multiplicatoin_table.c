#include<stdio.h>
int main()
{
    int i,j,a,b,n;
    printf("enter number = ");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        j=a*i;
        printf("%d * %d = ",a,i);
        printf("%d\n",j);
    }
}