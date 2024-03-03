#include "main.h"

/**
 * search_by_fname - search a student by his first name in a file
 * we assume that each student have his a unique first name
 *
 * @students: file name
 * @grp: the student's group
 * Return: true if  found, false otherwise
 */

int search_by_fname(FILE *students, char fn[50])
{
    char data[100];
    char *token;
    students = fopen("students.txt", "r");
    if (students == NULL)
    {
        printf("Can't open the file");
        return 0;
    }
    while (!feof(students))
    {
        fgets(data, sizeof(data), students);
        if (strstr(data, "===========================") != NULL)
        {
            continue;
        }
        token = strtok(data, ":");
        if (token != NULL)
        {
            token = strtok(NULL, ":");
            token[strcspn(token, "\n")] = '\0';
            if (strcmp(token, fn) == 0)
                return 1;
        }
    }
    return 0;
    fclose(students);
}