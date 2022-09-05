/*  
 WAP print reverse of integer number
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int x = 549;
    int reversed = 0;
    while(x!=0){
      reversed = reversed*10 + (x%10);
      x = x/10;
    }
    printf("The reversed no is %d\n", reversed);
    return 0;
}
