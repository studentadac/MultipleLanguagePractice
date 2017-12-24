#include <stdio.h>
int main()
{
    int nedan = 1;
    int genka = 0;
    printf("値段の入力\n");
    scanf("%d", &nedan);
    printf("原価の入力\n");
    scanf("%d", &genka);

    nedan *= 1.08;
    int point = nedan * 0.1;
    printf("価格    %d\nポイント  %d\n利益率   %d\n", nedan, point,
           100 * (nedan - genka) / nedan);
}
