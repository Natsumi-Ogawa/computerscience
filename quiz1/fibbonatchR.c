//#testtest
#include <stdio.h>
int main() {
  long long int a[1000]={0};
  a[0] = 0;
  a[1] = 1;
  //  int a2;
  int i;
  for (i = 2; i <= 30; ++i) {
    a[i] = a[i-1] + a[i-2];
    //    a2 = a0 + a1;
    //a0 = a1;
    //a1 = a2;
    printf("the %dth fibonatch number is %lld\n", i, a[i]);
    //printf("%d\n",a[i]);
  }
  // printf("the 10th fibonatch number is %d\n", a2);
  return 0;
}
