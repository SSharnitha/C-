#include<stdio.h>
int main()
{
 int a[2][2],b[2][2],c[2][2],i,j,*p1[2],*p2[2];
 for(i=0;i<2;i++)
     p1[i]=*(a+i);
 for(i=0;i<2;i++)
     p2[i]=*(b+i);
 printf("enter the elements of matrix a:");
 for(i=0;i<2;i++)
 {
   for(j=0;j<2;j++)
     scanf("%d",p1[i]+j);
 }
 printf("enter the elements of matrix b:");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
       scanf("%d",p2[i]+j);
  }
 printf("the added matrix is:\n");
 for(i=0;i<2;i++)
 {
   for(j=0;j<2;j++)
  c[i][j]=*(p1[i]+j)+*(p2[i]+j);
    //c[i][j]=a[i][j]+b[i][j];
 }
 for(i=0;i<2;i++)
 {
   for(j=0;j<2;j++)
     printf("%d\t",c[i][j]);
     printf("\n");
 }
 return 0;
}
