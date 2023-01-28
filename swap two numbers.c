#include<stdio.h>
int main() {
  int n1, n2, temp;
  printf("Enter first number: ");
  scanf("%d", &n1);
  printf("Enter second number: ");
  scanf("%d", &n2);
  temp = n1;
  n1 = n2;
  n2 = temp;
  printf("after swapping---");
  printf("\nfirst number = %d\n", n1);
  printf("second number = %d", n2);
  return 0;
}
