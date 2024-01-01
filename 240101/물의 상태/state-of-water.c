#include <stdio.h>

int main() {
    int tp;
    scanf("%d", &tp);
    if (tp < 0) {
        printf("ice");
    } else if (tp >= 100) {
        printf("vapor");
    } else {
        printf("water");
    }
    return 0;
}