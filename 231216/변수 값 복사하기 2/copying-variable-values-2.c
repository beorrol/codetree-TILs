#include <stdio.h>

int main() {
    int a = 5, b = 6, c = 7;
    a = b = c;
    printf("%d %d %d", a,b,c);
    return 0;
}