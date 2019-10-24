//1011 圆柱体表面积
#define PI 3.14159
#include "stdio.h"
int main()
{
    double r, h;
    scanf("%lf %lf", &r, &h);
    printf("%0.2f", (r * r * PI * 2) + (h * r * 2 * PI));
    return 0;
}
