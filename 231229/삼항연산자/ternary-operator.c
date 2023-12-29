#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);
    printf((score == 100) ? "pass" : "failure");
    return 0;
}