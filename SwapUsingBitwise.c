/*  
WAP Swap any two numbers using bitwise operators. How does it work?
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int x = 20;
    int y = 30;
    printf("The x and y before swapping is %d and %d \n", x, y);
    x = x^y;
    y = x^y;
    x = x^y;
    printf("The x and y after swapping is %d and %d \n", x, y);
    return 0;
}
