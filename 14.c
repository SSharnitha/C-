#include<stdio.h>
int gcd(int,int);
int main()
{
 int a,b;
 printf("enter the value of a and b:");
 scanf("%d%d",&a,&b);
 gcd(int a,int b);
 return 0;
}
int gcd(int a,int b)
{
 if (a>b)
    e=a;
 else
    e=b;
 int i,j=0,c[e],d[e];
 for(i=0;i<a;i++)
 {
     if(a%i==0)
     {
       c[j]=i;
       j++;
     }
 }
 j=0;
 for(i=0;i<b;i++)
 {
     if(b%i==0)
     {
       d[j]=i;
       j++;
     }
 }





}
