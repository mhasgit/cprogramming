#include <stdio.h>

void print_repeated_digits()
{
    // Checking Repeated Digits
    int a[10] = {0};
    long n;
    printf("Enter a Number: ");
    scanf("%ld", &n);

    int digit;
    while (n > 0)
    {
        digit = n % 10;
        a[digit] += 1;
        n /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (a[i] > 1)
        {
            printf("%d is repeated %d times\n", i, a[i]);
        }
    }
}


int main() 
{

    print_repeated_digits();

    return 0;
}