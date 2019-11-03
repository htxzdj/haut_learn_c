//1019 公园门票
#include "stdio.h"
#include "math.h"
int main()
{
    unsigned int n;
    double m;
    scanf("%d", &n);
    m = n*50;
    if (n >=30)
    {
        m=n*48;
    }
    printf("%0.2lf",m);
    return 0;
}
