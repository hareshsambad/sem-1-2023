#include<stdio.h>
int main()
{
    char i='a',j='A';
    printf("lower case :");
    while(i<='z')
    {
        printf("_%c ",i);
        i++;
    }
    printf("\n");
    printf("upper case : ");
    while(j<='Z')
    {
        printf("_%c ",j);
        j++;
    }
}