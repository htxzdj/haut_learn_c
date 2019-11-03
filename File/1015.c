//1015 二次方程的实根
#include "stdio.h"
#include "math.h"
int main()
{
    double a, b, c, dlt, g1, g2;
    scanf("%lf %lf %lf", &a, &b, &c);
    dlt = (b * b) - (4 * a * c);
    if (dlt > 0)
    {
        g1 = (-b + sqrt(dlt)) / (2 * a);
        g2 = (-b - sqrt(dlt)) / (2 * a);
        if (g1 > g2)
        {
            printf("%7.2lf", g1);
            printf("%7.2lf", g2);
        }
        else
        {
            printf("%7.2lf", g2);
            printf("%7.2lf", g1);
        }
    }
    else //输入错误
    {
        return 0;
    }
    return 0;
}