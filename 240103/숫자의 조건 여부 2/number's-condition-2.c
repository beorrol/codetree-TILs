#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a == 5) {
        printf("A");
    }
    if (a % 2 == 0) {
        printf("B");
    }
    return 0;
}