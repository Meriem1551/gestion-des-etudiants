#include "main.h"

int data_menu()
{
    int choice;
    printf("WELCOME TO OUR DATA BASE :DD\n");
    printf("Choose one of the following recomandations :\n");
    printf("\t1 - Add a new student.\n");
    printf("\t2 - Search for a specific student by first name.\n");
    printf("\t3 - Display all students data.\n");
    printf("\t3 - Sort all students.\n");
    printf("\t4 - Delete a student.\n");
    printf("\t0 - to exit.\n");
    scanf("%d", &choice);
    return choice;
}
