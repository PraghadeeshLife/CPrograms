#include <stdio.h>

//First 12 Fibonacci Series

int main(void) {
  printf("Fibonacci Series\n");
  int zero = 0;
  int first = 1;
  printf("%d\n",zero);
  printf("%d\n",first);
  int newNo = 0;
  for(int i=0; i<10; i++){
    newNo = zero + first;
    printf("%d\n",newNo);
    zero = first;
    first = newNo;
  }
  return 0;
}
