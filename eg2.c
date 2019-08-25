#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[50]= "I Love to ";
    char str2[50]= "Cycle";
    char str3[50]=strcat(str1,str2) ;
    printf(str3);
    return 0;
}
