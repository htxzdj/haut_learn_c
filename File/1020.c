//1020 两整数排序
#include "stdio.h"
#include "math.h"
int main()
{
    int x, y, m;
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        m = y;
        y = x;
    }
    else
    {
        m = x;
    }
    printf("%d %d", m, y);
    return 0;
}
