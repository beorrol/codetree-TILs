#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a >= 3000) {
        printf("3000");
    } else if (a >= 1000) {
        printf("1000");
    } else if (a >= 500) {
        printf("500");
    } else {
        printf("no");
    }
    return 0;
}