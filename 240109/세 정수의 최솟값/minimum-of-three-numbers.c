#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int temp = a;
    if (temp > b) temp = b;
    if (temp > c) temp = c;
    printf("%d", temp);
    return 0;
}