#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3;
    a = b = c;
    printf("%d %d %d", a,b,c);
    return 0;
}