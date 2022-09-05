/*  
Program to add without using - Symbol
*/

#include <stdio.h>
#include <math.h>

int add(int a, int b)
{
    if (!b) {
        return a;
    }
 
    int sum = a ^ b;
    int carry = (~a & b) << 1;
 
    return add(sum, carry);
}

int main()
{
  int x = 55;
  int y = 35;
  printf("%d \n", add(x,y));
}
