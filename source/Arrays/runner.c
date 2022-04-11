#include <stdio.h>
#include <stdbool.h>
#include "array_chapter.h"

#define SIZE 100

void print_help();

int main(void)
{

	print_help();

	while (true)
	{
		int no;
		printf("Enter Function No: ");
		scanf("%d", &no);

		switch (no)
		{
		case SIZE:
			print_diagonal_matrix();
			break;
		case 2:
			print_repeated_digits();
			break;
		case 3:
			print_reversing_number();
			break;
		case 4:
			print_conversion();
			break;
		case 5:
			print_finding_circle_area();
			break;
		case 6:
			print_repeated_digits_count();
		case 7:
			print_max_no_in_array();
		case 8:
			computing_interest();

		default:
			print_help();
			break;
		}
	}

	return 0;
}

void print_help()
{
	printf("\n\n");
	printf("Help\n");
	printf("1. print_diagonal_matrix \n");
	printf("2. print_repeated_digits \n");
	printf("3. print_reversing_number \n");
	printf("4. print_conversion \n");
	printf("5. print_finding_circle_area \n");
	printf("6. print_repeated_digits_count \n");
	printf("7. print_max_no_in_array \n");
	printf("8. computing_interest()");
	printf("\n\n");
}
