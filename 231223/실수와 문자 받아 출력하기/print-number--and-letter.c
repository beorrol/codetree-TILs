#include <stdio.h>

int main() {
    char a;
    double b,c;
    scanf("%c\n%lf\n%lf", &a,&b,&c);
    printf("%c\n%.2lf\n%.2lf", a,b,c);
    return 0;
}