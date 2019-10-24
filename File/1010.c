//1010 求圆的周长和面积
#define PI 3.14159
#include "stdio.h"
int main()
{
    int r;
    scanf("%d", &r);
    printf("%0.2f %0.2f", r * 2 * PI, r * r * PI);
    return 0;
}
