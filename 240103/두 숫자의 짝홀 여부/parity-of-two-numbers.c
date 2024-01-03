#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if (a % 2 == 0) {
        printf("even\n");
    } else {
        printf("odd\n");
    }
    if (b % 2 == 0) {
        printf("even\n");
    } else {
        printf("odd\n");
    }
    return 0;
}