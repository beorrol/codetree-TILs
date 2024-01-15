#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == 3 || n == 4 || n == 5) printf("Spring");
    if (n == 6 || n == 7 || n == 8) printf("Summer");
    if (n == 9 || n == 10 || n == 11) printf("Fall");
    if (n == 12 || n == 1 || n == 2) printf("Winter");
    return 0;
}