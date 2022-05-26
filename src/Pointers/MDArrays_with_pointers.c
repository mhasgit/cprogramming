#include <stdio.h>

#define N 5
#define NUM_ROWS 3
#define NUM_COL 3

int main()
{
    //accessing 2D array using one loop

    // int arr[NUM_ROWS][NUM_COL];
    // int *ptr;

    // for (ptr = &arr[0][0]; ptr <= &arr[NUM_ROWS - 1][NUM_COL - 1]; ptr++)
    // {
    //     *ptr = 0;
    //     printf(" %d\n", *ptr);
    // }


    //accessing rows of a 2-D array

    int ar[NUM_ROWS][NUM_COL];
    int i, *p;

    for (p = ar[i]; p < ar[i] + NUM_COL; p++)
    {
        *p = 0;
        printf("%d", *p);
    }

    //accessing coloumn of a 2D array

    int arrr[NUM_ROWS][NUM_COL];
    int j, (*ptr_1)[NUM_COL];

    for (ptr_1 = &arrr[0]; ptr_1 < &arrr[NUM_ROWS]; ptr_1++)
    {
        (*ptr_1)[j] = 0;
        printf("%d\n", *ptr_1);
    }
    
    return 0;
}