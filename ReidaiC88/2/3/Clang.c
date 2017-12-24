#include <stdio.h>
int main()
{
    double r = 0;
    printf("半径の入力　\n");
    scanf("%lf", &r);
    const double pi = 3.14;
    double taiseki = 4 / 3 * pi + r * r * r;
    printf("体積%6.4fcc\n", taiseki);
}
