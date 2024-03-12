#ifndef Lab03_h
#define Lab03_h
#include <stdio.h>
#include <iostream>
#include <string.h>
void AddStudent(int *numberOfStudents, char ***namesList, int **yearsList, const char *imie, int wiek);

void Cat(int numberOfStudents, char **namesList);
void Cat(int numberOfStudents, int *yearsList);

void ClearList (int numberOfStudents, char ***namesList);
void ClearList (int numberOfStudents, int **yearsList);
#endif