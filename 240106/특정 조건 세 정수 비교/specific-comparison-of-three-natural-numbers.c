#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int result;
    if (a > b && a > c) {
        result += a;
    } else if (b > a && b > c) {
        result += b;
    } else {
        result += c;
    }
    if (a == result) {
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