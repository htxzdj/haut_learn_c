//1029 三角形判定
#include "stdio.h"
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
    if (y + z > x)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
