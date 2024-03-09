#include "main.h"

/**
 * add_data - adds student s to a file
 * @students : file name
 * @student : struct
 */

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

    students = fopen("students.txt", "a+");
    if (students == NULL)
        return;
    fprintf(students, "%s\n", student.Fname);
    fprintf(students, "%s\n", student.Lname);
    fprintf(students, "%d\n", student.group);
    fprintf(students, "%.2f\n", student.average);
    fprintf(students, "===========================\n");
    fclose(students);
}
