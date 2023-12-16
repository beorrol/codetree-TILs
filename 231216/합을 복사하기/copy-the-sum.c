#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3;
    int temp = a + b + c;
    a = b = c = temp;
    printf("%d %d %d", a,b,c);
    return 0;
}