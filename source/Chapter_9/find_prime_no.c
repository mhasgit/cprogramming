#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool prime_number(int n)
{
    int divisor;
    if (n <= 0)
        return false;
    for (divisor = 2; divisor * divisor <= n; divisor++)
    {
        if (n % divisor == 0)
            return false;

        return true;
    }
}

int main()
{
    int n;
    printf("Enter any Number: ");
    scanf("%d", &n);

    if (prime_number(n))
        printf("You entered a prime number...\n");
    else
        printf("Not a prime number...\n");

    return 0;
}