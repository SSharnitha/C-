#include<stdio.h>
int flip();
int main()
{
 int i,a,tail=0,head=0;
 for(i=0;i<100;i++)
 {
  a=flip();
  if(a==0)
   tail++;
  else
   head++;
 }
 printf("\nThe no of heads=%d\nThe no of tails=%d",head,tail);
 return 0;
}
int flip()
{
 int a;
 a=rand();
 if(a%2==0)
    return 0;
 else
    return 1;
}
