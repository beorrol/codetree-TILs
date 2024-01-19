#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d\n%d %d", &a, &b, &c, &d);
    if (a > c) printf("A");
    else if (a < c) printf("B");
    else if (a == c && b > d) printf("A");
    else printf("B");
    return 0;
}