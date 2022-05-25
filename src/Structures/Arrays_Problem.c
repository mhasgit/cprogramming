#include <stdio.h>
#include <string.h>

#define SIZE 2

int ages[SIZE];
char *names[SIZE];
char *birthDates[SIZE];

int count = 0;

void add_student(int, char *name, char *dateOfBirth);
void show_all_students();
void show_student(int studentId);

int main()
{
    while (1)
    {
        int option;
        printf("Enter an Option: ");
        scanf("%d", &option);

        if (option == 1)
        {
            int age;
            char name[100], dateOfBirth[30];

            add_student(age, name, dateOfBirth);
        }

        if (option == 2)
        {
            show_all_students();
        }

        if (option == 3)
        {
            int studentId;
            printf("Enter Student Id: ");
            scanf("%d", &studentId);

            if (studentId < count)
            {
                show_student(studentId);
            }
            else
            {
                printf("student with that id does not exist");
            }
        }
    }

    return 0;
}

void add_student(int age, char *name, char *dateOfBirth)
{

    if (count == SIZE)
    {
        printf("Can not add more than %d students", SIZE);
        return;
    }

    ages[count] = age;
    names[count] = name;
    birthDates[count] = dateOfBirth;
    count++;

    printf("Enter age of the student: ");
    scanf("%d", &age);
    printf("Enter name of the student: ");
    scanf("%s", name);
    printf("Enter DOB of the student: ");
    scanf("%s", dateOfBirth);   

}

void show_all_students()
{
    for (int i = 0; i < count; i++)
    {
        show_student(i);
    }
}

void show_student(int studentId)
{
    printf("Id: %d Name: %s Age: %d BOD: %s\n",
           studentId,
           names[studentId],
           ages[studentId],
           birthDates[studentId]);
}
