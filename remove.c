#include "main.h"

void delete_student(FILE *students, char fn[50])
{
    student s[100];
    char data[50];

    int index, num_students = 0;
    index = search_by_fname(students, fn);
    if (index == -1)
        printf("No such student was found.\n");
    else
    {
        students = fopen("students.txt", "r");
        if (students == NULL)
        {
            printf("Error while opening  the file!\n");
            return;
        }
        while (fgets(data, sizeof(data), students) != NULL)
        {
            if (strcmp(data, "===========================\n") == 0)
                continue;
            data[strcspn(data, "\n")] = '\0';
            data[0] = tolower(data[0]);
            strcpy(s[num_students].Fname, data);
            fgets(s[num_students].Lname, sizeof(s[num_students].Lname), students);
            fscanf(students, "%d\n%f\n", &s[num_students].group, &s[num_students].average);
            num_students++;
        }
        fclose(students);
        students = fopen("students.txt", "w");
        for (int i = 0; i < num_students; i++)
        {
            if (strcmp(s[i].Fname, fn) == 0)
            {
                continue;
            }
            s[i].Fname[0] = toupper(s[i].Fname[0]);
            fprintf(students, "%s\n", s[i].Fname);
            fprintf(students, "%s", s[i].Lname);
            fprintf(students, "%d\n", s[i].group);
            fprintf(students, "%.2f\n", s[i].average);
            fprintf(students, "===========================\n");
        }
        fclose(students);
    }
}