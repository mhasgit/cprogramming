#include <stdio.h>

#define N 10

void selection_sort(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 1 + i; j < size; j++)
        {
            if (a[j] > a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void selection_sort_rec(int a[], int size)
{
    if (size == 0)
    {
        return;
    }
    
    int maxIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (a[i] > a[maxIndex])
        {
            maxIndex = i;
        }
    }

    int temp = a[maxIndex];
    a[maxIndex] = a[size - 1];
    a[size - 1] = temp;

    selection_sort_rec(a, size - 1);
}

// int find_polynomial_value(int x)
// {
//     //int value = 3 * power(x, 5) + 2 * power(x, 4);
//     // printf;
// }

int power_rec(int x, int y);

int main()
{
    // int a[N];

    // printf("Enter %d Numbers: ", N);
    // for (int i = 0; i < N; i++)
    // {
    //     scanf("%d", &a[i]);
    // }

    // selection_sort_rec(a, N);

    // for (int i = 0; i < N; i++)
    // {
    //     printf(" %d", a[i]);
    // }

    int value = power_rec(2, 6);
    printf("%d", value);

    return 0;
}

// int power(int x, int y)
// {
//     int result = 1;
//     while (y-- > 0)
//     {
//         result = result * x;
//         return result;
//     }
// }

int power_rec(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }

    if (y % 2 == 0)
    {
        int z = power_rec(x, y / 2);
        return z * z;
    }
    else
    {
        return x * power_rec(x, y -1);
    }
}