#include <stdio.h>

int findgcd(int x, int y)
{
    printf("x: %d, y: %d\n",x,y);
    if(x*y<0)
    {
        return -1;
    }
    if(x == y)
    {
        return x;
    }
    int big,small;
    big = x + y;
    small = (x > y ? y : x);
    big -= small;
    if(small==0)
    {
        return big;
    }
    else
    {
        return findgcd(small,big%small);
    }
}

int main(void)
{
    int i = findgcd(17,5);
    printf("GCD: %d\n",i);
    return 0;
}
