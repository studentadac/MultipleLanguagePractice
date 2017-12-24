#include <stdio.h>
int main()
{
    printf("華氏　  摂氏\n");
    for (double F = 0.0, C = 0.0; C < 200; C += 10)
    {
        F = 9.0 / 5.0 * C + 32.0;
        printf("%3.2f\t%.2f\n", C, F);
    }
}
