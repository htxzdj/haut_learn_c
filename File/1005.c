//1005 整数幂
#include "stdio.h"
int arr[3] = {0};
int main()
{
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    for (int a = 0; a < 3; a++)
    {
        printf("%-8d %-8d %-8d\n", arr[a], arr[a] * arr[a], arr[a] * arr[a] * arr[a]);
    }
    return 0;
}
