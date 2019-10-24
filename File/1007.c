//1007 鸡兔同笼
#include "stdio.h"
int main()
{
    int m, n, j, t;
    //m头 n脚 j鸡 t兔
    scanf("%d %d", &m, &n);
    t = (n - (m * 2)) / 2;
    j = m - t;
    printf("%d %d", j, t);
    return 0;
}
