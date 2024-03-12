#include "Lab03.h"
void AddStudent(int *numberOfStudents, char ***namesList, int **yearsList, const char *imie, int wiek){
    char** pomocnicza;
    int * pomocniczaWiek;
    (*numberOfStudents)++;
    pomocnicza=new char*[*numberOfStudents];
    pomocniczaWiek=new int[*numberOfStudents];
    if((*numberOfStudents)>1){
        for(int i=0;i<(*numberOfStudents)-1;i++){
            pomocnicza[i]=(*namesList)[i];
            pomocniczaWiek[i]=(*yearsList)[i];
        }
        // delete [] *namesList;
        // delete [] *yearsList;
    }
    pomocnicza[(*numberOfStudents)-1]=new char[strlen(imie)+1];
    strcpy((pomocnicza)[*numberOfStudents-1],imie);
    pomocniczaWiek[*numberOfStudents-1]=wiek;
    (*namesList)=pomocnicza;
    *yearsList=pomocniczaWiek;
}

void Cat(int numberOfStudents, char **namesList){
    for(int i=0;i<(numberOfStudents);i++)
        std::cout<<(namesList)[i]<<std::endl;

}
void Cat(int numberOfStudents, int *yearsList){
    for(int i=0;i<(numberOfStudents);i++)
        std::cout<<yearsList[i]<<std::endl;

}

void ClearList (int numberOfStudents, char ***namesList){
    for(int i=0;i<numberOfStudents;i++){
        delete [] (*namesList)[i];
        }
        delete [] *namesList;

}
void ClearList (int numberOfStudents, int **yearsList){
    delete [] *yearsList;
}