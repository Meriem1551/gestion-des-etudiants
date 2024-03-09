#include "main.h"

/**
 * sort_data - function that sorts all data by first name;
 * @students: file name where data is stored
 */

void rewrite_data(student s[100], int size)
{
    FILE *sorted_students = fopen("students.txt", "w");

    for (int i = 0; i < size; i++)
    {
        fprintf(sorted_students, "%s", s[i].Fname);
        fprintf(sorted_students, "%s", s[i].Lname);
        fprintf(sorted_students, "%d\n", s[i].group);
        fprintf(sorted_students, "%.2f\n", s[i].average);
        fprintf(sorted_students, "===========================\n");
    }
    fclose(sorted_students);
}

void sort_data(FILE *students)
{
    student s[100], tmp;
    int num_students = 0, s_min;
    char line[50];
    students = fopen("students.txt", "r");
    if (students == NULL)
    {
        printf("Error while opening the file.\n");
        return;
    }
    while (fgets(line, sizeof(line), students) != NULL)
    {
        if (strcmp(line, "===========================\n") == 0)
        {
            continue;
        }
        strcpy(s[num_students].Fname, line);
        fgets(s[num_students].Lname, sizeof(s[num_students].Lname), students);
        fscanf(students, "%d\n%f\n", &s[num_students].group, &s[num_students].average);
        num_students++;
    }
    for (int i = 0; i < num_students - 1; i++)
    {
        s_min = i;
        for (int j = i + 1; j < num_students; j++)
        {
            if (strcmp(s[j].Fname, s[s_min].Fname) < 0)
            {
                s_min = j;
            }
            tmp = s[i];
            s[i] = s[s_min];
            s[s_min] = tmp;
        }
    }
    fclose(students);
    rewrite_data(s, num_students);
}