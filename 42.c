#include<stdio.h>
int main(int argc,char *argv[])
{

    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("argv[1]","a");
    fp2=fopen("argv[2]","r");
    while((ch=getc(fp2))!=EOF)
    {
        putc(ch,fp1);

    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}
