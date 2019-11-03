//1023 大小写转换
#include "stdio.h"
#include "math.h"
int main()
{
    char x[1];
    scanf("%s", x);
    if(x[0]>='a') x[0] -= 0x20;
    printf("%s", x);
    return 0;
}
