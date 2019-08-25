#include<stdio.h>
#include<string.h>
int main()
{
 int i,len;
 char a[50];
 printf("enter the string:");
 scanf("%s",a);
 len=strlen(a);
 for(i=0;i<len;i++)
 {
   if((a[i]=='a')||(a[i]=='A'))
     a[i]='x';
 }
 //for(i=0;i<len;i++)
 printf("%s",a);
 return 0;
 }
