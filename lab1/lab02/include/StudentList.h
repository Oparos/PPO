#ifndef StudentList_H
#define StudentList_H

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

void AddStudent(int* numberOfStudents, char ***namesList, char ***surnamesList, int** yearsList, const char *firstName, const char*secondName, const char*surname, int wiek){// dojdajey studenta do listy
    (*numberOfStudents)++;
    int rozmiar=strlen(firstName)+strlen(secondName)+1; //dlugosc i miejsce na odstep
    *namesList=(char**)realloc(*namesList,(*numberOfStudents) * sizeof(char*));
    (*namesList)[*numberOfStudents-1]=(char*)malloc(rozmiar*sizeof(char));
    // printf("siema\n");
    char *razem,odstep[]=" ";
    razem=(char*)malloc(rozmiar*sizeof(char));
    strcpy(razem,firstName);
    strcat(razem, odstep);
    strcat(razem,secondName);
    strcpy((*namesList)[*numberOfStudents-1],razem);
    *surnamesList=(char**)realloc(*surnamesList,(*numberOfStudents) * sizeof(char*));
        // printf("siema\n");
    (*surnamesList)[*numberOfStudents-1]=(char*)malloc(strlen(surname)*sizeof(char));
        // printf("siema\n");

    strcpy((*surnamesList)[*numberOfStudents-1],surname);
    // *surnamesList[*numberOfStudents-1]=(char*)surname;


    *yearsList=(int*)realloc(*yearsList,(*numberOfStudents) * sizeof(int));
    // *yearsList = (int *)realloc(*yearsList,(*numberOfStudents) * sizeof(int));

    (*yearsList)[(*numberOfStudents)-1]=wiek;
}

void PrintListContent(int numberOfStudents,char **namesList ){//wypisywanie imion
    for(int i=0;i<numberOfStudents;i++)
        printf("%s\n",namesList[i]);

}
void PrintListContent(int numberOfStudents,int *yearList){//wypisywanie wieku
    for(int i=0;i<numberOfStudents;i++)
        printf("%d\n",yearList[i]);
}
void PrintListContent(int numberOfStudents,char **namesList,char**surnameList, int * yearList ){//wypisywanie wszystkiego
    for(int i=0;i<numberOfStudents;i++)
        printf("%s, %s, - year %d\n",surnameList[i],namesList[i],yearList[i]);
}

void ClearStudents(int* numberOfStudents, char*** namesList, char***surnamesList, int** yearsList){ //zerowanie liczby studentow i czyszczeniee pamieci
    for(int i=0;i<(*numberOfStudents);i++){
        free((*namesList)[i]);
        free((*surnamesList)[i]);
    }
    free(*namesList);
    free(*surnamesList);
    free(*yearsList);
    *numberOfStudents=0;
}
#endif