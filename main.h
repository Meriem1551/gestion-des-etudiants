#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef struct
{
    char Fname[50];
    char Lname[50];
    int group;
    float average;
} student;

int data_menu();
void add_data(FILE *, student);
void show_all_data(FILE *);
int search_by_fname(FILE *, char[]);
#endif