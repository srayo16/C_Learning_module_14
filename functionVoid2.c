#include <stdio.h>
#include <string.h>

void sum(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int res = x + y;
    printf("%d\n", res);
}

int main()
{
    sum();
    return 0;
}