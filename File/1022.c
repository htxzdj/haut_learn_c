//1022 三整数排序
#include "stdio.h"
#include "math.h"
int main()
{
    int x, y, z, m;
    scanf("%d %d %d", &x, &y, &z);

    if (x < y)
    {
        m = x;
        x = y;
        y = m;
    }
    if (y < z)
    {
        m = y;
        y = z;
        z = m;
    }
    if (x < y)
    {
        m = x;
        x = y;
        y = m;
    }
    printf("%d %d %d", x, y, z);
    return 0;
}
