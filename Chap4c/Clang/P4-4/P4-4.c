#include <stdio.h>
int main() {
  int upr;
  printf("数値を入力してください\n");
  scanf("%d", &upr);
  int answer = upr * (upr + 1) / 2; //三角数でも止める
  printf("%d\n", answer);
  int counter = 0;
  for (int i = 1; i <= upr; i++) {
    counter += i;
  }
  printf("%d\n", counter); //単純に加算して求める

  return 0;
}
