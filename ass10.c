//4.HOTEL PRG:
#include<stdio.h>
#include<string.h>
int main()
{
struct  ho
{
 int nr,ar;
 char n[50],a[500];
 char g;
}h[5],h1[5];
int temp,j=0,i,r;
char gr;
for(i=0;i<5;i++)
{
 printf("enter the g,n,a,nr,ar:");
 scanf("%c",&h[i].g);
 scanf("%s",h[i].n);
 scanf("%s",h[i].a);
 scanf("%d%d",&h[i].nr,&h[i].ar);
}
printf("\nenter the room charge:");
 scanf("%d",&r);
 printf("\nThe hotels below the given room charge:\n");
 for(i=0;i<5;i++)
 {
 if(h[i].ar<r)
 printf("%s",h[i].n);
 }
printf("enter the grade:");
scanf("%c",&gr);
for(i=0;i<5;i++)
{
 if(gr==h[i].g)
 {
  h1[j]=h[i];
  j++;
 }
 for(i=0;i<5;i++)
 {
     for(j=i+1;j<5;j++)
     {
     if(h1[i].ar<h1[j].ar)
     {
         temp=h1[i].ar;
         h1[i].ar=h1[j].ar;
         h1[j].ar=temp;
     }
     }
 }
 printf("the hotels in the given grade:");
 for(i=0;i<5;i++)
 {
     printf("\n%s\t%d",h1[i].n,h1[i].ar);
 }
}
return 0;
}








