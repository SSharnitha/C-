#include<stdio.h>
int main(int arg,char *argv[])
{
    FILE *fp1,*fp2,*fp3;
    char ch,a[50],b[50];
    printf("enter two strings:");
    scanf("%s%s",a,b);
    fp1=fopen(argv[1],"w");
    fp2=fopen(argv[2],"w");
    fprintf(fp1,"%s",a);
    fprintf(fp2,"%s",b);
    fclose(fp1);
    fclose(fp2);
    fp1=fopen(argv[1],"r");
    fp2=fopen(argv[2],"r");
    fp3=fopen(argv [3],"a");
    while((ch=getc(fp1))!=EOF)
        putc(ch,fp3);
    while((ch=getc(fp2))!=EOF)
        putc(ch,fp3);
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
