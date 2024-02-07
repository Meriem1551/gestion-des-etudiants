#include "main.h"

void add_data(FILE *students, student student)
{
    printf("Enter his/her first name ");
    scanf("%s", &student.Fname);
    printf("Enter his/her last name ");
    scanf("%s", &student.Lname);
    printf("Enter his/her group ");
    scanf("%d", &student.group);
    printf("Enter his/her average ");
    scanf("%f", &student.average);

    students = fopen("students.txt", "a");
    fprintf(students, "First name: %s", student.Fname);
    fprintf(students, "\tLast name: %s", student.Lname);
    fprintf(students, "\tThe group is:%d", student.group);
    fprintf(students, "\t Average is: %.2f\n", student.average);
    fclose(students);
}
