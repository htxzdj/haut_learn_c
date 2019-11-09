//1027 判断水仙花数
#include "stdio.h"
int main()
{
    int d;
    int b, s, g;
    scanf("%d", &d);
    b = d / 100;
    b = b * b * b;
    s = d % 100 / 10;
    s = s * s * s;
    g = d % 10;
    g = g * g * g;

    if (b + s + g == d)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
