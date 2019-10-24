//1004 三位数的数位分离
#include "stdio.h"
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d %d %d", a % 10, a % 100 / 10, a / 100);
    return 0;
}
