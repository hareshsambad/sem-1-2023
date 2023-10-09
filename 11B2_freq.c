#include<stdio.h>
void main()
{
int i,n,c,a;

printf("enter number = ");
scanf("%d",&n);

printf(" list : \n");
for(i=0;i<=9;i++)
{
c =0;
a=n;
while(a!=0)
{
if((a%10)==i)
{
c++;
}
a=a/10;

}
  if(c>0)
  {
  printf("freq of %d is %d \n",i,c); 
  }
}

}

