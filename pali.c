#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],*p1,*p2;
    int n,flag=1;
    printf("enter the string:");
    scanf("%s",str);
    p1=str;
    p2=str;
    n=strlen(str);
    p2=p2+(n-1);
    while(p1<=p2)
    {
        if(*p1!=*p2)
        {
            flag++;
            break;
        }
        p1++;
        p2--;
    }
    if(flag==1)
        printf("palindrome");
    else
        printf("not a pali");
    return 0;
}
