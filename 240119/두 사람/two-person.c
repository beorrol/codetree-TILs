#include <stdio.h>

int main() {
    int age1, age2;
    char gender1, gender2;
    scanf("%d %c", &age1, &gender1);
    scanf("%d %c", &age2, &gender2);
    if ((age1 >= 19 || gender1 == 'M') && (age2 >= 19 || gender2 == 'M')) printf("1");
    else printf("0");
    return 0;
}