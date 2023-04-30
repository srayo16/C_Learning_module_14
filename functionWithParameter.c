#include <stdio.h>
#include <string.h>

int sum(int x, int y)
{
    int result = x + y;
    return result;
}

int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    int res = sum(a, b);
    printf("%d", res);
    return 0;
}