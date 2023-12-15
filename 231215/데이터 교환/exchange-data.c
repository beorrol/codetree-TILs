#include <stdio.h>

int main() {
    int a = 5, b = 6, c = 7;
    int t1, t2;
    t1 = a;
    t2 = b;
    a = c;
    b = t1;
    c = t2;
    printf("%d\n%d\n%d", a,b,c);
    return 0;
}