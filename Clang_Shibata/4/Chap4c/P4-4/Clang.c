#include <stdio.h>
int reverse(int x) {
  if (x <= 1)
    return (1);
  return x + reverse(x - 1); //再帰的に求める
}

int sum(int x) {
  return x * (x + 1) / 2; //三角数で求める
}
int loop(int x) //単純に加算して求める
{
  int counter = 0;
  for (int i = 1; i <= x; i++) {
    counter += i;
  }
  return counter;
}

int main() {
  int upr;
  printf("数値を入力してください\n");
  scanf("%d", &upr);
  printf("再帰%d\t\n", reverse(upr));
  printf("加算%d\t\n", loop(upr));
  printf("三角数%d\t\n", sum(upr));
  return 0;
}
