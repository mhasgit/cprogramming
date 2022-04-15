#include <stdio.h>
#include <stdbool.h>
#include "array_chapter.h"
#include "char-helper.h"

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
			break;
		case 7:
			print_max_no_in_array();
			break;
		case 8:
			computing_interest();
			break;
		case 9:
			printf("Enter a char: ");
			char ch = getch();
			printf("is_character: %s\n", is_character(ch) == true ? "True" : "False");
			break; 
		case 10:
			printf("Enter a char: ");
			is_digit(getch());
			break;
		case 11:
			printf("Enter a char: ");
			to_lower(getch());
			break;
		case 12:
			printf("Enter a char: ");
			to_upper(getch());
			break;

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
	printf("8. computing_interest() \n");
	printf("9. is_character() \n");
	printf("10. is_digit() \n");
	printf("11. to_lower() \n");
	printf("12. to_upper() \n");
	printf("\n\n");
}
