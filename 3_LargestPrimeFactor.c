#include <stdio.h>

int getInputInt() {
  int numberToDivide = 0;
  printf("Enter Number: ");
  scanf(" %d", &numberToDivide);
  return numberToDivide;
}

int main() {
  int numberToDivide = getInputInt();
  
  return 0;
}