#include <stdio.h>

int main() {
    int a,b;
    scanf("%d\n%d", &a, &b);
    a += 87;
    b %= 10;
    printf("%d\n%d", a,b);
    return 0;
}