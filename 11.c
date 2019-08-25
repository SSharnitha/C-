#include<stdio.h>
int intpow(int*,int*);
int main()
{
    int x,y,pow;
    printf("enter the val of x and y:");
    scanf("%d%d",&x,&y);
    pow=intpow(x,y);
    printf("the result is:%d\t%d",pow,x);
    return 0;
}
int intpow(int *x,int *y)
{
    int i,pow=1;
    for(i=1;i<=y;i++)
        pow*=x;
        x=x+1;
    return pow;
}
