#include "main.h"

int main(void)
{
    FILE *students;
    student s;
    int choice, index;
    char fn[50];
    do
    {
        choice = data_menu();
        switch (choice)
        {
        case 1:
            add_data(students, s);
            break;
        case 2:
            printf("Enter the First name of the student you're looking for ");
            scanf("%s", &fn);
            index = search_by_fname(students, fn);
            if (index != -1)
                printf("found\n");
            break;
        case 3:
            show_all_data(students);
            break;
        case 4:
            sort_data(students);
            break;
        case 5:
            printf("enter the student's name to delete ");
            scanf("%s", &fn);
            delete_student(students, fn);
            break;
        }
    } while (choice != 0);
}