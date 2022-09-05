/*  
 WAP implement XOR functionality with out using XOR(^) operator
100
011
111

*/

#include <stdio.h>
#include <math.h>

int myXOR(int a, int b){
  return (a | b) & (~a | ~b);
}

int main()
{
  int x = 4;
  int y = 3;
  printf("%d \n", myXOR(x,y));
}
