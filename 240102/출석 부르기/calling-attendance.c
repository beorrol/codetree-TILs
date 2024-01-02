#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a == 1) {
        printf("John");
    } else if (a == 2) {
        printf("Tom");
    } else if (a == 3) {
        printf("Paul");
    } else {
        printf("Vacancy");
    }
    return 0;
}