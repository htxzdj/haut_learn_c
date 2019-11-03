//1024 计算字母序号
#include "stdio.h"
int main()
{
    char x[2];
    char d;
    scanf("%s", x);
    if (x[0] >= 'a')
    {
        x[0] -= 0x20;
    }
    d = x[0] - 'A' + 1;
    printf("%d", d);
    return 0;
}
