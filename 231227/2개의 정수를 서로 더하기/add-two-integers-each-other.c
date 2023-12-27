#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int temp = a;
    a += b;
    b += a;
    printf("%d %d", a,b);
    return 0;
}