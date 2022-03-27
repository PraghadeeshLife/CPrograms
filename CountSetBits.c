#include <stdio.h>

int countSetBits(int);

int main(void) {
  printf("%d\n", countSetBits(8));
  return 0;
}

int countSetBits(int num){
  int setBits = 0;
  for(int i=1; i<=num; i++){
    int anotherNo = i;
    while(anotherNo!=0){
      if((anotherNo&1) == 1){
        setBits += 1;
      }
      anotherNo = anotherNo>>1;
    }
  }

  return setBits;
}
