#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a % 2 != 0) {
        a += 3;
    }
    if (a % 3 == 0) {
        a /= 3;
    }
    printf("%d", a);
    return 0;
}