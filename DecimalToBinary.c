#include <stdio.h>

int main(void) {
  printf("Decimal to Binary\n");

  printf("Enter the Decimal Number\n");
  int decimalNo;
  int quotientValue = 1;
  scanf("%d",&decimalNo);
  int val = 1;
  int remainderNo = 0;
  while(decimalNo!=0){
    
    quotientValue = decimalNo%2;
    decimalNo = decimalNo/2;
    remainderNo = val*quotientValue + remainderNo;
    val = val*10;
  
  }
   
   printf("%d\n",remainderNo);
  
  return 0;
}

/*
Decimal to Binary 
4 - 1 0 0 

4/2 - 0 2
2/2 - 0 1
1/2 - 0 1
*/
