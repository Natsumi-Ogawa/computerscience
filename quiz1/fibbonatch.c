#include <stdio.h>
int main() {
  int a0 = 0;
  int a1 = 1;
  int a2;
  int i;
  for (i = 0; i <= 10; ++i) {
    a2 = a0 + a1;
    a0 = a1;
    a1 = a2;
  }
  printf("the 10th fibonatch number is %d\n", a2);
  return 0;
}
