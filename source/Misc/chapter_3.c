#include <stdio.h>
#include <conio.h>

int main(void)
{
int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
printf("Enter the 1st single digit: ");
scanf("%1d", &d);
printf("Enter 1st group of five digits: ");

scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

printf("Enter 2nd groupof five digits: ");
scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

first_sum = d + i2 + i4 + j1 + j2 + j5;

second_sum = i1 + i3 + i5 + j2 + j4;
total = 3 * first_sum + second_sum;

printf("Check digit is:  %d\n", 9 - ((total - 1) %10));
  //  getch();
    return 0;
}