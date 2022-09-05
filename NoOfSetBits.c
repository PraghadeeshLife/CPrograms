/* Count Number of Set Bits */

#include <stdio.h>


int main()
{
    int i=183;
    int count = 0;
    printf("%d \n", i);
    while(i != 0){
      if (i&1){
        count += 1;
      }
      i = i>>1;
    }
    printf("%d \n", count);
    return 0;
}
