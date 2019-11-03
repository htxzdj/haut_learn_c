//1016 银行利率
#include "stdio.h"
#include "math.h"
int main()
{
    int a;
    double b;
    scanf("%d %lf", &a, &b);
    for (; a > 0; a--)
    {
        b = b + (b * 0.0225);
    }
    printf("%0.6lf", b);
    return 0;
}
