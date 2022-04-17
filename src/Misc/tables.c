#include <stdio.h>
int main(void)
{
    int num, x;
    printf("Enter a number to find it's Table: ");
    scanf("%d", &num);
    printf("Enter length for Your Table: ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        printf("%d x %d = %d\n",num ,i ,num * i);
    }

    return 0;
}