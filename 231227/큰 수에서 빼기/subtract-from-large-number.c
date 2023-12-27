#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int result;
    if (a > b) {
        result = a - b;
    } else {
        result = b - a;
    }
    printf("%d", result);
    return 0;
}