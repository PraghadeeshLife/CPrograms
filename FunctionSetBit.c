/*  
Write a functionsetbits(x,p,n,y)that return x with then bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.
e.g. if x = 10101010 (170 decimal) and y = 10100111 (167 decimal) and n = 3 and p = 6 then
you need to strip off 3 bits of y (111) and put them in x at position 10xxx010 to get answer
10111010. Your answer should print out the result in binary form although input can be in
decimal form.
Your output should be like this:
x = 10101010 (binary)
y = 10100111 (binary)
setbits n = 3, p = 6 gives x = 10111010 (binary). 
*/

#include <stdio.h>
#include <math.h>

int functionsetbits(int x,int p,int n,int y){
  int value = pow(2,n) - 1;
  printf("The value is %x \n", value);
  int stripped = y & value;
  printf("The stripped value is %x \n", stripped);
  int moved = stripped << (p-n);
  printf("The moved value is %x \n", moved);
  x = x | moved;
  return x;
}

int main()
{
    int x = 0xAA;
    int y = 0xA7;
    printf("The final value is %x \n", functionsetbits(x, 6, 3, y));
    return 0;
}
