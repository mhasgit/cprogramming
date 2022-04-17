#include <stdio.h>

void print_repeated_digits(long n)
{
    // Checking Repeated Digits
    int a[10] = {0};

    int digit;
    while (n > 0)
    {
        digit = n % 10;
        a[digit] += 1;
        n /= 10;
    }

    printf("Digit:      ");
    for (int i = 0; i < 10; i++)
    {
        printf("%5d", i);
    }

    printf("\n");
    printf("Occurrances: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%5d", a[i]);
    }
}

int main()
{

    long n;
    printf("Enter a Number: ");
    scanf("%ld", &n);

    while (n < 0)
    {
        print_repeated_digits(n);

        printf("\n");
        printf("Enter a Number: ");
        scanf("%ld", &n);
    }

    return 0;
}