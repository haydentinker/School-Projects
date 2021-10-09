#include <cassert>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
ofstream fout;
ifstream fin;
#include "Theater.h"


void Array(int &RowSize, int &ColumnSize, double TheaterPrices[][COLUMN]) {
  // checking to see if the file exists
  ifstream fin;
  fin.open("theater.txt");
  // if file doesnt exist
  if (!fin) {
    Info(RowSize, ColumnSize, TheaterPrices);
  } else {
    // get array from file
    fin >> RowSize >> ColumnSize;
    // loop to collect row prices from file
    for (int i = 0; i < RowSize; i++) {
      for (int a = 0; a < ColumnSize; a++) {
        fin >> TheaterPrices[i][a];
      }
    }
  }
}
void Info(int &RowSize, int &ColumnSize, double TheaterPrices[][COLUMN]) {
  ofstream fout;
  fout.open("theater.txt");
  if (!fout) {
    cout << "Cannot find file" << endl;
  } else {
    // getting the bound for the Theater
    cout << "Within the bounds of 30 x 50 enter the dimensions of the theater"
         << endl;

    // loop to collect Rows
    do {
      Error = 0;
      cout << "Enter the number of rows: ";
      cin >> RowSize;
      if (!cin || RowSize > ROW) {
        cin.clear();
        cin.ignore(1000, '\n');
        cerr << "Invalid Length. Please Try Again \n";
        Error = 1;
      }
    } while (Error == 1);
  }
  // loop to collect Columns
  do {
    Error = 0;
    cout << "Enter the number of columns: ";
    cin >> ColumnSize;
    // checking for errors
    if (!cin || ColumnSize > COLUMN) {
      cin.clear();
      cin.ignore(1000, '\n');
      cerr << "Invalid Length. Please try again\n";
      Error = 1;
    }
  } while (Error == 1);

  for (int i = 0; i < RowSize; i++) {
    // loop to get row price
    int Number = 0;
    do {
      Error = 0;
      cout << "Enter the price for seats in a row" << i + 1 << ":";
      cin >> Number;
      // check for errors
      if (!cin) {
        cin.clear();
        cin.ignore(1000, '\n');
        cerr << "Invalid Price Please Try Again.\n";
        continue;
        Error = 1;
      }
      // loop to set row PriceSum
      for (int a = 0; a < ColumnSize; a++) {
        TheaterPrices[i][a] = Number;
      }
    } while (Error == 1);
  }
  // outputing to the file
  fout << RowSize << endl << ColumnSize << endl;
  // output the row prices to the file
  for (int i = 0; i < RowSize; i++) {
    for (int a = 0; a < ColumnSize; a++) {
      fout << TheaterPrices[i][a] << endl;
    }
  }
  fout.close();
}

// prints menu
char Menu() {
  char Choice = 'E';
  cout << "What would you like to do?" << endl;
  cout << setw(4) << "(C) Display seating chart" << endl;
  cout << setw(4) << "(S) Sell Tickets" << endl;
  cout << setw(4) << "(D) Display Theater" << endl;
  cout << setw(4) << "(E) Save and exit the program" << endl;
  cout << setw(4) << "(R) Reset the program" << endl;
  do {
    Error = 0;
    cout << "Your choice: ";
    cin >> Choice;
    // check for Error
    if (!cin || (Choice != 'C' && Choice != 'S' && Choice != 'D' &&
                 Choice != 'E' && Choice != 'R')) {
      cin.clear();
      cin.ignore(1000, '\n');
      cerr << "Invalid choice. Please try again.\n";
    }
  } while (Error == 1);
  return Choice;
}
// doing the function of the users choice
void Choice(char Choice, int &Exit, double TheaterPrices[][collumns],
            char TheaterSeating[][collumns], int &RowSize, int &ColumnSize,
            int &PriceSum, int &TicketSum) {
  // switch for the different funcitons
  switch (Choice) {
  case 'C':
    DisplayChart(TheaterSeting, ColumnSize, RowSize);
    break;
  case 'S':
    Sell(RowSize, ColumnSize, PriceSum, TicketSum, TheaterPrices,
         TheaterSeating) break;
  case 'D':
    Statistics(RowSize, ColumnSize, PriceSum, TicketSum) break;
  case 'E':
    cout << "Thank your for using this program." << endl;
    Exit = 1;
    break;
  case 'R':
    Reset(RowSize, ColumnSize, PriceSum, TicketSum, TheaterPrices,
          TheaterSeating) break;
  default:
    cerr << "Invalid Choice";
    break;
  }
}
void DisplayChart(char TheaterSeating[][COLUMN], int ColumnSize, int RowSize) {
  // define the variables
  int Sum = ColumnSize, Sum2 = 0;
  // loop for
  if (Sum > 10 && (Sum % 10) != 0) {
    while ((Sum % 10) != 0) {
      Sum--;
      Sum2++;
    }
  }
  // loop
  cout << "        ";
  for (int i = 1, T = 0; i <= Sum; i *= 10, T++) {
    cout << T << "        ";
  }
  cout << endl;
  // loop
  if ((Sum % 10) == 0 && Sum >= 10) {
    cout << "          ";
    for (int f = 1; f <= (ColumnSize / 10); f++) {
      cout << "123456789";
    }
    for (int i = 0; i < Sum2; i++) {
      cout << (i + 1);
    }
  } else {
    cout << setw(8);
    for (int r = 0; r < ColumnSize; r++) {
      cout << (r + 1);
    }
  }
  cout << endl;
  // loop to create rows
  for (int i = 0; i < RowSize; i++) {
    cout << "Row " << (i + 1) << " ";
    if (i < 9) {
      cout << " ";
    }
    for (int a = 0; a < ColumnSize; a++) {
      cout << TheaterSeating[i][a];
    }
    cout << endl;
  }
}

void Sell(int RowSize, int ColumnSize, int &PriceSum, int &TicketSum,
          double TheaterPrices[][COLUMN], char TheaterSeating[][COLUMN]) {
  // defining the variables
  int Error = 0, Number = 0, N1 = 0, N2 = 0, Sum2 = 0;
  char G = 'G';
  // loop
  do {
    Error = 0;
    // getting input
    cout << "Please Enter how many seats you would like to sell: ";
    cin >> Number;
    // error checking!!!!!!
    if (!cin || Number < 1 || Number > RowsSize) {
      cin.clear();
      cin.ignore(1000, '\n');
      cerr << "Invalid Choice. Please try again. \n";
      Error = 1;
    }
  } while (Error == 1);
  TicketSum += Number;
  // asking for what seats the person wants
  cout << "What seats would you like to buy?" << endl
       << "Enter in format \"Row Column\" " << endl;
  // loop for getting the seats
  for (int i = 0; i < Number, i++) {
    do {
      Error = 0;
      cout << "Seat #" << (i + 1) << ":";
      cin >> N1 >> G >> N2;
      // MORE ERROR CHECKING :D
      if (!cin) {
        cin.clear();
        cin.ignore(1000, '\n');
        cerr << "Invalid Choice. Please try again \n";
        Error = 1;
      } else if (TheaterSeating[N1 - 1][N2 - 1] == '*') {
        cerr << "That seat is already taken. Choose another one.\n";
      } else if (TheaterSeating[N1 - 1][N2 - 1] != '#') {
        cerr << "That seat does not exist please choose another one.\n";
        Error = 1;
      }
    } while (Error == 1);
    // editing the theater with the new information!
    TheaterSeating[N1 - 1][N2 - 1] = '*';
    PriceSum += TheaterPrices[N1 - 1][N2 - 1];
    Sum2 += TheaterPrices[N1 - 1][N2 - 1];
  }
  // outputting the total
  cout << "Your total is $" << Sum2 << endl;
}

void Stats(int RowSize, int ColumnSize, int PriceSum, int TicketSum) {
  // outputs information
  cout << "Tickets sold: " << TicketSum << endl
       << "Total revenue: $" << Pricesum << endl
       << "Total seats still avaible: " << RowSize * ColumnSize - TicketSum
       << endl;
}

void Order66(int &RowSize, int &ColumnSize, int &PriceSum, int &TicketSum,
             double TheaterPrices[][COLUMN], char TheaterSeating[][COLUMN]){
                 //resets all the information
                 for(int i=0; i<RowSize;i++){
                     for(int a=0;a<ColumnSize;i++){
                         TheaterSeating [i][a]='#';
                         TheaterPrices [i][a]=0;
                     }
                 }
                 //resetting the variables
                 RowSize=80;
                 ColumnSize=80;
                 PriceSum=0;
                 TicketSum=0;
                 //mission complete
                 cout<<"The theater and its stats have been reset "<<endl;
                 //calling the function to start over
                 Info(RowSize,ColumnSize,TheaterPrices);
                 //setting all the seats to avaible
                 for(int i=0;i<RowSize;i++){
                     for(int a=0;a<ColumnSize;i++){
                         TheaterSeating[i][a]='#';
                     }
                 }
             }
//setting all the seats to avaible
                 for(int i=0;i<RowSize;i++){
                     for(int a=0;a<ColumnSize;i++){
                         TheaterSeating[i][a]='#';
                     }
                 }