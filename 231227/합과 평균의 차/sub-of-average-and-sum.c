#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int sum = a+b+c;
    printf("%d\n%d\n%d", sum, sum/3, sum - sum/3);
    return 0;
}