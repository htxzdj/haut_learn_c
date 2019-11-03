//1017 表面积和体积
#include "stdio.h"
#include "math.h"
int main()
{
    int a, b, c, d, e, e2;
    int S, Sp, V, Vd;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    e2 = e * 2;
    S = (a * b + a * c + b * c) * 2;
    Sp = ((a - e2) * d + (b - e2) * d + (c - e2) * d) * 8;
    V = a * b * c;
    Vd = (((a - e2) * (b - e2) * d) + ((a - e2) * (c - e2) * d) + ((b - e2) * (c - e2) * d)) * 2;
    printf("%d %d\n", S + Sp, V - Vd);
    return 0;
}
