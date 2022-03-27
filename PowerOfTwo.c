#include <stdio.h>
#include <stdbool.h>

/* Power of Two */

bool isPowerOfTwo(int);

int main(void) {
  
  if (isPowerOfTwo(16)){
    printf("It is a power of two");
  }
  else{
    printf("Not a power of two");
  }
  
  return 0;
}

bool isPowerOfTwo(int someNo){
  return (someNo != 0) && ((someNo & (someNo-1)) == 0);
}
