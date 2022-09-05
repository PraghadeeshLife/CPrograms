/*  WAP Check if the 20th bit of a 32-bit integer is on or off? */

#include <stdio.h>


int main()
{
    int a = 0xFFFFFFFF;
    int b;
    printf("%x \n", a);
    if( sizeof(a) == 4){
      printf("The size of integer is 32 bits \n");
      printf("Checking the 20th bit \n");
      b = a>>20;
      printf("%x \n", b);
      if ((b & 1) == 1){
        printf("The 20th bit is ON \n");
      }
      else{
        printf("The 20th bit is OFF \n");
      }
    }
}
