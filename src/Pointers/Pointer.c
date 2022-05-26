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
        printf("%d\n", sum);
    }

    int sum_1 = 0;
    int arr[N] = {1, 2, 3, 4, 5};
    int *ptr_1 = arr;
    for (int j = 0; j < N; j++)
        sum_1 += ptr_1[j];
    {
        printf("%d\n", sum_1);
    }
    return 0;
}