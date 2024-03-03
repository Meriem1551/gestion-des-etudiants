#include "main.h"

int main(void)
{
    FILE *students;
    student s;
    int choice;
    int found = 0;
    char fn[50];
    do
    {
        choice = data_menu();
        if (choice == 1)
            add_data(students, s);
        if (choice == 2)
        {
            printf("Enter the First name of the student you're looking for ");
            scanf("%s", &fn);
            found = search_by_fname(students, fn);
            printf("%d\n", found);
        }
        if (choice == 3)
            show_all_data(students);
        //  if (choice == 4)
        //      sort_data();
        //  if (choice == 5)
        //      delete_data();
    } while (choice != 0);
}