#include<stdio.h>
int main()
{
 int a[2][2],b[2][2],i,j,*p1[2];
 for(i=0;i<2;i++)
     p1[i]=*(a+i);
 printf("enter the elements of matrix a:");
 for(i=0;i<2;i++)
 {
   for(j=0;j<2;j++)
     scanf("%d",p1[i]+j);
 }
 printf("the transpose matrix is:\n");
 for(i=0;i<2;i++)
 {
   for(j=0;j<2;j++)
  b[j][i]=*(p1[i]+j);
 }
 for(i=0;i<2;i++)
 {
   for(j=0;j<2;j++)
     printf("%d\t",b[i][j]);
     printf("\n");
 }
 return 0;
}
