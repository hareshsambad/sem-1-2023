#include<stdio.h>
void main()
{
    int i,m,n,max=0,min,avg=0,sum=0,count=0;
    printf("enter an element of hight= ");
    scanf("%d",&n);
    printf("enter an element of whight= ");
    scanf("%d",&n);
    
    int whight[n],hight[n];
    printf("enter %d value of hight\n",n);
    for(i=0;i<n;i++)
    {
        printf("person[%d] : ",i);
        scanf("%d",&hight[i]);

    }
    printf("enter %d value of whight\n",n);
    for(i=0;i<n;i++)
    {
        printf("person[%d] : ",i);
        scanf("%d",&whight[i]);


    }
    

    for(i=0;i<n;i++)
    {
        if(hight[i]>=170 && whight[i]<=50)
        {
            count++;
        }

    }
            printf("whom person is %d",count);
}