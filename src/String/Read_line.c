#include <stdio.h>

#define STR_LEN 80

int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar() != '\n'))
    if(i < n)
    str[i++] = ch;
    str[i] = '\0';

    return i;
}

int main()
{
    char str[STR_LEN + 1];
    printf("Enter a sentence\n");
    read_line(str, STR_LEN);
    puts(str);


    return 0;
}