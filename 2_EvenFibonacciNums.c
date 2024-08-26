#include <stdio.h>

int main() {
  int n_2_term = 1;
  int n_1_term = 2;
  int n_term = 3;
  int sum = 2;

  while (n_term <= 4000000) {
    n_2_term = n_1_term;
    n_1_term = n_term;
    n_term = n_1_term + n_2_term;
    if (n_term % 2 == 0) {
      sum += n_term;
    }
  }
  printf("sum: %d\n", sum);
  return 0;
}