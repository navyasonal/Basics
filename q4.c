#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    int num = 0;

    for (int i = 1; i <= n; i++)
    {
        num = (num * 2) + 1;

        printf("%d ", num);
    }
    return 0;
}