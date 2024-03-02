#include "main.h"

int main(void)
{
    FILE *students;
    student s;
    int choice;
    do
    {
        choice = data_menu();
        if (choice == 1)
            add_data(students, s);
        // if (choice == 2)
        // search_by_grp();
        if (choice == 3)
            show_all_data(students);
        //  if (choice == 4)
        //      sort_data();
        //  if (choice == 5)
        //      delete_data();
    } while (choice != 0);
}