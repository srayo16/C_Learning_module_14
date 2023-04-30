#include <stdio.h>
#include <string.h>

void show()
{
    printf("Hello World\n");
}
void sum(int x, int y)
{
    int res = x + y;
    printf("%d", res);
    return;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    show();
    sum(x, y);

    return 0;
}