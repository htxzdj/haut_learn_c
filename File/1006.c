//1006 求等差数列的和
#include "stdio.h"
int main()
{
    int a, b, c, d = 0;
    scanf("%d %d %d", &a, &b, &c);
    for (d = 0; a <= b; a += c)
        d += a;
    printf("%d", d);
    return 0;
}
