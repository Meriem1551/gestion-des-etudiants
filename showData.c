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
        printf("Error while opening the file\n");
        return;
    }
    char data[100];
    int i = 2;
    printf("Student number 1\n");
    while (!feof(students))
    {
        fgets(data, sizeof(data), students);
        if (strstr(data, "===========================") != NULL)
        {
            printf("Student number %d\n", i++);
            continue;
        }
        printf("%s", data);
    }
    fclose(students);
}