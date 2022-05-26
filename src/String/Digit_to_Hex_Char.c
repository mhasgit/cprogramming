#include <stdio.h>

char digit_to_hex(int digit);

int main()
{
    printf("%d", digit_to_hex(15));

    return 0;
}

char digit_to_hex(int digit)
{
    return "0123456789ABCDEF"[digit];
}