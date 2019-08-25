#include <stdio.h>
int sum(int a, int b, int c) {
    return a*b*c;
}
int main() {
    int (*function_pointer)(int, int, int);
    function_pointer  =  sum;
    printf("%d", function_pointer(1, 4.5, 5));
    return 0;
}
