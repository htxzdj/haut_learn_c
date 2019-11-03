//1021 三个整数的最大值
#include "stdio.h"
#include "math.h"
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (y > x)
    {
        x = y;
    }
    if (z > x)
    {
        x = z;
    }

    printf("%d", x);
    return 0;
}
