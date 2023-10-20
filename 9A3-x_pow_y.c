#include<stdio.h>
int main()
{
    int i=1,n=1,sum=1,x,y;
    printf("enter value x = ");
    scanf("%d",&x);
    printf("enter value y = ");
    scanf("%d",&y);

    while(n<=y)
    {   
        sum=sum*x; 
        n++;       
    }
        printf("%d ^ %d = %d ",x,y,sum);

}