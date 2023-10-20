#include<stdio.h>
void main(){
    float a,D,x,c,b;
    printf("enter number a = ");
    scanf("%f",&a);
    printf("enter number b = ");
    scanf("%d",&b);
    printf("enter number c =");
    scanf("%d",&c);
    if(a>0)
    {
        D=(b*b)-4*a*c;
        x=(-b+D)/2*a;
        printf("x = %f",x);
    }
}