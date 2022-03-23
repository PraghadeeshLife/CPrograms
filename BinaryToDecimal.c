#include <stdio.h>
#include <math.h>

int main(void) {
  printf("Binary to Decimal\n");
  printf("Read the Binary Number\n");
  int binaryNo = 0;
  scanf("%d",&binaryNo);
  int decimalNo;
  int remainder;
  int i=0;
  while(binaryNo!=0){
    remainder = binaryNo%10;
    binaryNo = binaryNo/10;
    decimalNo = decimalNo + (remainder * pow(2, i));
    i = i + 1;
  }

  printf("%d\n",decimalNo);
  return 0;
}
