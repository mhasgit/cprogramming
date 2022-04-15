#include <stdio.h>
#include <stdbool.h>
#include "char-helper.h"

bool is_digit(char ch)
{
    if (ch >= '0' && ch <= '9')
    {
        return true;
    }

    return false;
}

bool is_upper(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return true;
    }
    
    return false;
}

bool is_lower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return true;
    }
    
    return false;
}

bool is_character(char ch)
{
    if (is_upper(ch) || is_lower(ch))
    {
        return true;
    }
    
    return false;
}

char to_lower(char ch)
{
    if(is_lower(ch)) 
    {
        return ch;
    }

    return ch + 32;
}

char to_upper(char ch)
{
    if (is_upper(ch))
    {
        return ch;
    }
    
    return ch - 32;
}