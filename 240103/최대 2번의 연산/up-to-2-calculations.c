#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a % 2 == 0) {
        a /= 2;
    }
    if (a % 2 != 0) {
        a += 1;
        a /= 2;
    }
    printf("%d", &a);
    return 0;
}