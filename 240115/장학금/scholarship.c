#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    if (a >= 90 && b >= 95) printf("100000");
    else if (a >= 90 && b >= 90) printf("50000");
    else printf("0");
    return 0;
}