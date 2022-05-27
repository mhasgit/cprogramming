#include <stdio.h>

#define STR_LEN 80

int main()
{
    char str[STR_LEN + 1];

    printf("Enter a sentence\n");

    // scanf("%20s", str);
    // puts(str);

    gets(str);
    puts(str);


    return 0;
}