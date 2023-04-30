#include <stdio.h>
#include <string.h>

int sumTwo(void)
{
    int a, b;
    printf("Enter two digits: ");
    scanf("%d %d", &a, &b);
    int res = a + b;
    return res;
}
int sumTwo()
{
    int a, b;
    printf("Enter two digits: ");
    scanf("%d %d", &a, &b);
    int res = a + b;
    return res;
}

int main()
{
    printf("%d", sumTwo());

    return 0;
}