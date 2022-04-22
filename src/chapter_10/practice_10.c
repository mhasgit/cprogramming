#include <stdio.h>


// Wrong use of external variables

int i;
void print_one_row()
{
    for (i = 1; i < +10; i++)
    {
        printf("*");
    }
}

void print_all_rows()
{
    for (i = 1; i < +10; i++)
    {
        print_one_row();
        printf("\n");
    }
}



int main()
{
    print_all_rows();
}