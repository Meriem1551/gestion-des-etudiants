#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char Fname[50];
    char Lname[50];
    int group;
    float average;
} student;

int data_menu();
void add_data(FILE *, student);
#endif