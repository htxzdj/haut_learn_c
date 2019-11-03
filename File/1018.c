//1018 奇数偶数
#include "stdio.h"
#include "math.h"
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
