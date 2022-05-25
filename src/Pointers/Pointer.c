#include <stdio.h>

#define N 5

int main()
{

    int *p = (int[]){2, 3, 4, 5, 6, 7, 8};

    printf("%d\n", ++(*p));
    printf("%d\n", ++*p);
    printf("%d\n", *(++p));
    printf("%d\n", *++p);
    printf("%d\n", *p++);
    printf("%d\n", *(p++));
    printf("%d\n", *p++);
    printf("%d\n", (*p)++);

    int sum = 0;
    int a[N] = {10, 20, 30, 40, 50};
    int *ptr = a;
    for (ptr = a; ptr < a + N; ptr++)
        sum += *ptr;
    {
        printf("%d", sum);
    }
    return 0;
}