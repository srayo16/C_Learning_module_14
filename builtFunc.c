#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    int ans = ceil(a);
    int ans2 = floor(a);
    int ans3 = round(a);
    double ans4 = sqrt(a);
    double ans5 = pow(a, b);
    printf("%d\n%d\n%d\n%lf\n%lf\n", ans, ans2, ans3, ans4, ans5);
    int z;
    scanf("%d", &z);
    int res = abs(z);
    printf("%d\n", res);
    return 0;
}