//1013 求两点间距离
#include "stdio.h"
#include "math.h"
int main()
{
    double x1,y1,x2,y2;
    scanf("%lf %lf %lf %lf", &x1,&y1,&x2,&y2);
    printf("%0.2lf",sqrt(pow(x1-x2,2)+pow(y1-y2,2)));
    return 0;
}
