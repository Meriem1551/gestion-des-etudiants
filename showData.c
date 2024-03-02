#include "main.h"

/**
 * show_all_data - print all data of a file
 * @students: file name
 */

void show_all_data(FILE *students)
{
    students = fopen("students.txt", "r");
    if (students == NULL)
    {
        printf("Error opening the file\n");
        return;
    }
    char data[100];
    while (!feof(students))
    {
        fgets(data, sizeof(data), students);
        printf("%s", data);
    }
    fclose(students);
}