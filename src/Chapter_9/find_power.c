#include <stdio.h>
#include <conio.h>
/*
int power(int x, int y)
{
    int i, result = 1;
    for (i = 1; i <= y; i++)
        result = result * x;
    return result;
}
*/
int power(int x, int y)
{
    int result = 1;
    while (y-- > 0)
    {
        result = result * x;
        return result;
    }
}
int main()
{
    int base, exponent;
    printf("Enter Base Number: ");
    scanf("%d", &base);
    printf("Enter Exponent Number: ");
    scanf("%d", &exponent);

    printf("The Ans is: %d", power(base, exponent));

    return 0;
}