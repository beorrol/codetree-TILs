#include <stdio.h>

int main() {
    int a = 3, b = 5;
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d\n%d", a,b);
    return 0;
}