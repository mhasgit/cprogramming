#include <stdio.h>
#include <conio.h>

void add_one(int x, int y)
{
    x += 1;
    y += 1;
}

void set_array_values(int b[], int size) 
{
    for (int i = 0; i < 10; i++)
    {
        b[i] = 0;
    }
}

int main(void)
{
    int length = 8, width = 10;

    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    printf("length %d - width: %d\n", length, width);
    add_one(length, width);
    printf("length %d - width: %d\n", length, width);

    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    set_array_values(a, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    
    return 0;
}