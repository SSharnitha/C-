#include<stdio.h>
int main(int argc,char *argv[])
{
    int x,y,rem,sum=0;
    x=atoi(argv[1]);
    y=x;
    while(x!=0)
    {
        rem=x%10;
        x=x/10;
        sum=sum+(rem*rem*rem);
    }
    if(y==sum)
        printf("amstrong");
    else
        printf("not a amstrong");
    return 0;
}
