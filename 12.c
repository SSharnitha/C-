#include<stdio.h>
void per(int);
int main()
{
    int x;
    printf("enter the val of x:");
    scanf("%d",&x);
    per(x);
    return 0;
}
void per(int x)
{
    int i,sum=0;
    for(i=1;i<x;i++)
    {
        if(x%i==0)
            sum+=i;
    }
    if(sum==x)
        printf("perfect");
    else
        printf("not perfect");
}
