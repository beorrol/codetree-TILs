#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int min = a;
    if (min>b) min = b;
    if (min>c) min = c;
    if (a == min) {
        printf("1 ");
    } else {
        printf("0 ");
    }
    if (a == b == c) {
        printf("1 ");
    } else {
        printf("0 ");
    }
    return 0;
}