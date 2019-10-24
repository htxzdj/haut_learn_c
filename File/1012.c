//1012 求绝对值
#include "stdio.h"
int main()
{
    double f;
    scanf("%lf", &f);
    printf("%0.2f", f > 0 ? f : -f);
    return 0;
}
