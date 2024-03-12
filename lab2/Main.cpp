#include "Lab03.h"

int main ()
{
  int numberOfStudents = 0;
  char** namesList = NULL;
  int* yearsList = NULL;

  AddStudent(&numberOfStudents, &namesList, &yearsList, "Spike", 3);
  AddStudent(&numberOfStudents, &namesList, &yearsList, "Rick", 5);
  AddStudent(&numberOfStudents, &namesList, &yearsList, "Sterling", 1);

  Cat(numberOfStudents, namesList);
  Cat(numberOfStudents, yearsList);

  ClearList (numberOfStudents, &namesList);
  ClearList (numberOfStudents, &yearsList);
//   numberOfStudents = 0;
  return 0;
}
/* wynik dzialania programu:
build$ ./StudListFilters
Spike
Rick
Sterling
3
5
1
*/