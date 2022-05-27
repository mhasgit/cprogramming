#include <stdio.h>

#define STR_LEN 80

int count_spaces(const char s[])
{
    int count = 0, i;
    for (i = 0; s[i] != '\0'; i++)
    if (s[i] == " ")
    count++;


    return count;
}

// same function using pointer

int count_spaces(const char *s)
{
    int count = 0,;
    for (; *s[i] != '\0'; s++)
    if (*s[i] == " ")
    count++;


    return count;
}

int main()
{
    int spaces;
    char str[STR_LEN + 1];
    spaces = printf("Enter a sentence\n");
    count_spaces(str);

    printf("The Number of spaces is: %d", spaces);


    return 0;
}