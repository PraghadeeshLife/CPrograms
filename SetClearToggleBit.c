#include <stdio.h>

#define set(no, n) no|=(1<<n)
#define clear(no, n) no&=~(1<<n)
#define toggle(no, n) no^=(1<<n)

int main()
{
    int i=1;
    printf("%d \n", toggle(i,1));
    printf("%d \n", clear(i,1));
    printf("%d \n", set(i,1));
    return 0;
}
