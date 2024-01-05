#include <stdio.h>

int main() {
    int a,b,c,d,e;
    scanf("%d\n%d %d %d %d", &a,&b,&c,&d,&e);
    printf("%d\n", a > b);
    printf("%d\n", a > c);
    printf("%d\n", a > d);
    printf("%d\n", a > e);
    return 0;
}