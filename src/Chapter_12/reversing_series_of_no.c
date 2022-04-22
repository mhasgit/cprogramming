#include <stdio.h>

#define N 10

int main()
{
    int a[N], *p;

    printf("Enter %d Numbers: ", N);
    for (p = a; p < a + N; p++)
    {
        scanf("%d", p);
    }

    printf("....In reverse order is....\n");
    for (p = a + N - 1; p >= a; p--)
    {
        printf(" %d", *p);
        printf("\n");
    }
    return 0;
}