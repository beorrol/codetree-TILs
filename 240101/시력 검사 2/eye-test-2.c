#include <stdio.h>

int main() {
    double sight;
    scanf("%lf", &sight);
    if (sight >= 1.0) {
        printf("High");
    } else if (sight >= 0.5) {
        printf("Middle");
    } else {
        printf("Low");
    }
    return 0;
}