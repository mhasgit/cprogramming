#include <stdio.h>
#include <stdbool.h>

#include "array_chapter.h"

void print_diagonal_matrix()
{
  double iden[N][N];
  int row, col;
  for (row = 0; row < N; row++)
  {
    for (col = 0; col < N; col++)
    {
      if (row == col)
      {
        iden[row][col] = 1.0;
      }
      else
        iden[row][col] = 0.0;
    }
  }
  for (row = 0; row < N; row++)
  {
    for (col = 0; col < N; col++)
    {
      printf("%g  ", iden[row][col]);
    }
    printf("\n");
  }
}

void print_repeated_digits()

{
  // Checking Reapeated Digits
  bool arr[10] = {false};
  int digit;
  long n;

  printf("Enter a Number: ");
  scanf("%d", &n);

  while (n > 0)
  {
    digit = n % 10;
    if (arr[digit])
      break;
    arr[digit] = true;
    n /= 10;
  }
  if (n > 0)
  {
    printf("Repeated Digit %d\n", digit);
  }
  else
  {
    printf("No Repeated Digit\n");
  }
}

void print_reversing_number()
{
  // Reversing Numbers
  int arr[N];
  for (int i = 0; i < N; i++)
  {
    printf("Enter 10 numbers to reverse: ");
    scanf("%d", &arr[i]);
  }
  printf("In Reverse Order:");
  for (int j = N - 1; j >= 0; j--)
  {
    printf("%d ", arr[j]);
  }
  printf("\n");
}

void print_finding_circle_area()
{

  // for finding area of a circle

  float r, area;
  printf("Enter a Radius: ");
  scanf("%f", &r);
  area = pi * r * r; // used macro (pi)
  printf("Area of a Circle is %f is: \n", area);
}

void print_conversion()
{
  // converting from fahrenheit to celcius

  float fahr, cent;
  printf("Enter Temp in Fahrenheit: ");
  scanf("%f", &fahr);
  cent = (fahr - 32) * 5 / 9;
  printf("The Temp in Celcius is: %.1f\n", cent);
}

void print_repeated_digits_count()
{
  int arr[10] = {0};
  int digits;
  long no;

  printf("Enter a Number: ");
  scanf("%d", &no);

  while (no > 0)
  {
    digits = no % 10;
    if (arr[digits])
      arr[digits] = 1;
    else
      arr[digits] = arr[digits] + 1;
    no /= 10;
  }
  if (no > 0)
  {
    printf("Repeated Digit %d\n", digits);
  }
  else
  {
    printf("No Repeated Digit\n");
  }

  for (int i = 0; i < digits; i++)
  {
    printf("Repeated digits is %d %d", i, arr[i] - 1);
  }
}

void print_max_no_in_array()
{
  int arr[10];
  int i, max;
  for (i = 0; i < 10; i++)
  {
    printf("Enter a Number: ");
    scanf("%d", &arr[i]);
  }

  max = arr[0];

  for (i = 0; i < 10; i++)
  {
    if (max < arr[i])
      max = arr[i];
  }
  printf("Maximum Number is: %d", max);
}

void computing_interest()
{
  int i, low_rates, num_years, year;
  double value[5];

  printf("Enter Interest rate: ");
  scanf("%d", &low_rates);
  printf("Enter Number of Years: ");
  scanf("%d", &num_years);

  printf("\nYears\n");

  for (i = 0; i < NUM_RATES; i++)
  {
    printf("%6d%%", low_rates + i);
    value[i] = INITIAL_BALANCE;
  }

  printf("\n");

  for (year = 1; year < num_years; year++)
  {
    printf("%3d", year);

    for (i = 0; i < NUM_RATES; i++)
    {
      value[i] += (low_rates + i) / 100.00 * value[i];
      printf("%7.2d", value[i]);
    }

    printf("\n");
  }
}
