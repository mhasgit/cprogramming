#include <stdio.h>
int main()
{
    matrix_5_by_5();
    return 0;
}

int matrix_5_by_5()
{

    int a[5][5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d ", i);
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

        printf("Row totals: ");
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += a[i][j];
        }

        printf("%d ", sum);
    }

        printf("Column totals: ");
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += a[j][i];
        }

        printf("%d ", sum);
    }
    return 0;
}