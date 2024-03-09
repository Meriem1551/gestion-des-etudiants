#include "main.h"

int main(void)
{
    FILE *students;
    student s;
    int choice, found = 0;
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
            found = search_by_fname(students, fn);
            printf("%d\n", found);
            break;
        case 3:
            show_all_data(students);
            break;
        case 4:
            sort_data(students);
            break;
        case 5:
            // delete_data();
            break;
        }
    } while (choice != 0);
}