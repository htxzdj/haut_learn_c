//1025 最大字符
#include "stdio.h"
int main()
{
    char x[3];
    char d;
    scanf("%c %c %c", &x[0],&x[1],&x[2]);
    d = x[0];
    if (x[1] > x[0])
    {
        d = x[1];
    }
    if (x[2] > d)
    {
        d = x[2];
    }
    printf("%c", d);
    return 0;
}
