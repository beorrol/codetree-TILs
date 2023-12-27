#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    double meter;
    meter = a / 100.0;
    int bmi = b / (meter*meter);
    printf("%d\n", bmi);
    if (bmi > 24) {
        printf("Obesity");
    }
    return 0;
}