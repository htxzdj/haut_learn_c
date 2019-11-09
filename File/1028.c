//1028 I love 闰年！
#include "stdio.h"
int main()
{
    int d;
    scanf("%d", &d);
    if ((d % 4 == 0 && d % 100 > 0) || d % 400 == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
