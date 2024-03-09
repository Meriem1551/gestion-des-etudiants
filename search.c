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
    int len;
    students = fopen("students.txt", "r");
    if (students == NULL)
    {
        printf("Can't open the file");
        return 0;
    }
    while (!feof(students))
    {
        fgets(data, sizeof(data), students);
        len = strlen(data);
        if (len > 0 && data[len - 1] == '\n')
        {
            data[len - 1] = '\0';
        }
        data[0] = tolower(data[0]);
        fn[0] = tolower(fn[0]);
        if (strcmp(data, fn) == 0)
            return 1;
    }
    return 0;
    fclose(students);
}