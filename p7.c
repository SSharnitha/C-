#include<stdio.h>
int main()
{
    int i, j, k;
    for(i=1;i<=2;i++)
    {
        for(j=i;j<5;j++)
            printf(" ");

        for(k=1;k<(i*2);k++)
                printf("*");

        printf("\n");
    }
    for(i=3;i>=1;i--)
    {
        for(j=5;j>i;j--)
            printf(" ");

        for(k=1;k<(i*2);k++)
            printf("*");

        printf("\n");
    }

}
