#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int re1 = a+b;
    int re2 = a-b;
    double result = (double)re1 / re2;
    printf("%.2lf", result);
    return 0;
}