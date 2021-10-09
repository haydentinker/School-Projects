/*************************************************************************
 *
 * Checkpoint Assignment: Building a Gradebook for CPTR142
 *
 * File Name:       gradebook.cpp
 * Name:            ?
 * Course:          CPTR 142
 * Date:            January 9, 2020
 *
 */
 
#include <cassert>  // for assert
#include <cstdlib>  // for exit
#include <iostream> // for cin and cout

#include <cstdlib>  // for exit
using namespace std;

// sizes of arrays
const int CLASS_SIZE = 6;
const int NUMBER_OF_SCORES = 14;

// Function: displayGradebook
// Precondition:  names and ids are an array of length size and
//                homeworkScores is a 2D array of size by scores.
// Postcondition: Prints a gradebook table to the console. The table includes
//                the students name, id number and all homework scores.
//                No return value.
void displayGradebook(string names[], long ids[],
                      char homeworkScores[][NUMBER_OF_SCORES], int size);

// Function: displayGrades
// Precondition:  names is an array of length size and
//                homeworkScores is a 2D array of size by scores.
// Postcondition: Prints a each students name and their grade to the console.
//                No return value.
void displayGrades(string names[], char homeworkScores[][NUMBER_OF_SCORES],
                   int size);

// Function: displaySuggestedResubmissions
// Precondition:  names is an array of length size and
//                homeworkScores is a 2D array of size by scores.
// Postcondition: Prints each student's name with a message about the homework
//                they should resubmit next. No return value.
void displaySuggestedResubmissions(string names[],
                                   char homeworkScores[][NUMBER_OF_SCORES],
                                   int size);

// Function: getGradeTotals
// Precondition:  homeworkScores is an array of length size and
//                eTotal, mTotal, rTotal, and nTotal represent the number of
//                scores for each grade metric.
// Postcondition: The function adds up the individual grade metrics into
//                eTotal, mTotal, rTotal, and nTotal.
//                The result is passed back using pass-by-reference variables.
//                No return value.
void getGradeTotals(char homeworkScores[], int size, int &eTotal, int &mTotal,
                    int &rTotal, int &nTotal);

// Function: getHomeworkGrade
// Precondition:  eTotal, mTotal, rTotal, and nTotal represent the number of
//                scores for each grade metric.
// Postcondition: Return the letter grade for the homework category based on
//                the CPTR142 syllabus.
char getHomeworkGrade(int eTotal, int mTotal, int rTotal, int nTotal);

// Function: getNextResubmission
// Precondition:  homeworkScores is an array of length size
// Postcondition: Returns the homework number the student should resubmit.
//                The suggested homework should be the first homework assignment
//                that the student scored a R or N.
//                If all homework has an M or E, then the suggested homework
//                should be the first M.
//                If the student has all E's, then return -1.
int getNextResubmission(char homeworkScores[], int size);

/*====================================================================
 * Main program
 */
int main() {

  // define an array for student names
  string names[CLASS_SIZE] = {"Ava",    "Brook", "Caryon",
                              "Daniel", "Emma",  "Perfect"};

  // define an array for student ids
  long ids[CLASS_SIZE] = {142001, 142002, 142003, 142004, 142005, 777777};

  // define a 2D array of scores
  char homeworkScores[CLASS_SIZE][NUMBER_OF_SCORES] = {
      {'E', 'E', 'E', 'E', 'M', 'N', 'E', 'R', 'E', 'M', 'N', 'R', 'R', 'N'},
      {'M', 'M', 'E', 'M', 'M', 'R', 'R', 'M', 'R', 'N', 'N', 'N', 'N', 'N'},
      {'E', 'E', 'E', 'E', 'M', 'E', 'E', 'M', 'E', 'E', 'E', 'M', 'E', 'E'},
      {'E', 'E', 'M', 'N', 'R', 'R', 'M', 'E', 'M', 'M', 'M', 'M', 'E', 'E'},
      {'E', 'E', 'M', 'E', 'M', 'M', 'E', 'M', 'E', 'E', 'E', 'M', 'E', 'E'},
      {'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E'},
  };

  // During development, test code can go here

  // Loop to collect user input
  while (true) {

    // prompt for search term
    int menu;
    cout << "Gradebook Menu " << endl;
    cout << "  1: Display Gradebook " << endl;
    cout << "  2: Display Grades " << endl;
    cout << "  3: Show Next Resubmission for Student " << endl;
    cout << "  4: Quit " << endl;
    cout << "Enter selection: ";
    cin >> menu;

    // TODO Check for invalid menu input.
    if (cin.fail()) {
      cin.clear();
      cout << "Invalid choice.";
      cin.ignore(1000, '\n');
    }
    // menu options
    switch (menu) {
    case 1:
      displayGradebook(names, ids, homeworkScores, CLASS_SIZE);
      break;
    case 2:
      displayGrades(names, homeworkScores, CLASS_SIZE);
      break;
    case 3:
      displaySuggestedResubmissions(names, homeworkScores, CLASS_SIZE);
      break;
    case 4:
      cout << "Goodbye." << endl;
      exit(0);
      break; //	included for consistency; never executed!
    default:
      cerr << "Invalid choice." << endl;
      break; //	included for consistency; redundant since at end anyway!
    }
  }

  // end program
  return 0;
}

void displayGradebook(string names[], long ids[],
                      char homeworkScores[][NUMBER_OF_SCORES], int size) {
  cout << "Name\tID\tAssignments" << endl;
  for (int row = 0; row < size; row++) {
    cout << names[row] << "\t" << ids[row] << "\t";
    for (int col = 0; col < NUMBER_OF_SCORES; col++) {
      cout << homeworkScores[row][col] << " ";
    }
    cout << "\n";
  }
}
// Function: displaySuggestedResubmissions
// Precondition:  names is an array of length size and
//                homeworkScores is a 2D array of size by scores.
// Postcondition: Prints each student's name with a message about the homework
//                they should resubmit next. No return value.
void displaySuggestedResubmissions(string names[],
                                   char homeworkScores[][NUMBER_OF_SCORES],
                                   int size) {
  char homeworkScore[NUMBER_OF_SCORES];
  int redo = 0;
  for (int i = 0; i < CLASS_SIZE; i++) {
    for (int y = 0; y < NUMBER_OF_SCORES; y++) {
      homeworkScore[y] = homeworkScores[i][y];
    }
    redo = getNextResubmission(homeworkScore, 6);
    if (redo == -1) {
      cout << names[i] << " has no homework to resubmit";
    } else {
      cout << names[i] << " should resubmit homework " << redo;
    }
    cout << endl;
  }
}

// Function: getNextResubmission
// Precondition:  homeworkScores is an array of length size
// Postcondition: Returns the homework number the student should resubmit.
//                The suggested homework should be the first homework assignment
//                that the student scored a R or N.
//                If all homework has an M or E, then the suggested homework
//                should be the first M.
//                If the student has all E's, then return -1.
int getNextResubmission(char homeworkScore[], int size) {
  int count = 0;
  for (int i = 0; i <= NUMBER_OF_SCORES; i++) {
    if (homeworkScore[i] == 'R') {
      return i;
    } else if (homeworkScore[i] == 'N') {
      return i;
    }
    count++;
  }
  count = 0;
  for (int i = 0; i <= NUMBER_OF_SCORES; i++) {
    if (homeworkScore[count] == 'M') {
      return i;
    }
    count++;
  }
  return -1;
}
void displayGrades(string names[], char homeworkScores[][NUMBER_OF_SCORES],
                   int size) {
  int etot = 0;
  int mtot = 0;
  cout << "Student Grades" << endl;
  for (int i = 0; i < size; i++) {
    etot = 0;
    mtot = 0;
    for (int y = 0; y < NUMBER_OF_SCORES; y++) {
      if (homeworkScores[i][y] == 'E') {
        etot++;
      } else if (homeworkScores[i][y] == 'M') {
        mtot++;
      }
    }
    if ((etot >= 10) && (etot + mtot == 14)) {
      cout << names[i] << "\tA" << endl;
    } else if ((etot >= 5) && (mtot + etot >= 13)) {
      cout << names[i] << "\tB" << endl;
    } else if ((etot + mtot >= 11)) {
      cout << names[i] << "\tC" << endl;
    } else if (etot + mtot >= 8) {
      cout << names[i] << "\tD" << endl;
    } else {
      cout << names[i] << "\tF" << endl;
    }
  }

void displayGrades(
    string names[], 
    char homeworkScores[][NUMBER_OF_SCORES],
    int size) {
        cout << "displayGrades" << endl;
}

void displaySuggestedResubmissions(
    string names[],
    char homeworkScores[][NUMBER_OF_SCORES],
    int size) {
        cout << "displaySuggestedResubmissions" << endl;
}

void getGradeTotals(
    char homeworkScores[], 
    int size, 
    int &eTotal, 
    int &mTotal,
    int &rTotal, 
    int &nTotal) {

}

char getHomeworkGrade(int eTotal, int mTotal, int rTotal, int nTotal) {
    return 'A';
}

int getNextResubmission(char homeworkScores[], int size) {
    return 0;
}
