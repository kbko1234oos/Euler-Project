#include <stdio.h>

int main() {
  int sum = 0;
  for (int i = 1; i < 1001; ++i) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  printf("%d\n", sum);
  return 0;
}