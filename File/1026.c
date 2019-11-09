//1026 字符类型判断
#include "stdio.h"
int main()
{
    char x;
    char d;
    scanf("%c", &x);
    if (x >= 'A' && x <= 'Z')
    {
        printf("upper");
    }
    else if (x >= 'a' && x <= 'z')
    {
        printf("lower");
    }
    else if (x >= '0' && x <= '9')
    {
        printf("digit");
    }
    else
    {
        printf("other");
    }
    return 0;
}
