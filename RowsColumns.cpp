#include <iostream>
using namespace std;

int main () {
  int rows;
  int columns;
  char symbol;

  cout << "Enter rows: ";
  cin >> rows;

  cout << "Enter columns: ";
  cin >> columns;

  cout << "Enter symbol: ";
  cin >> symbol;

  for (int i=1; i<=rows; i++) {
    for (int k=1; k<=columns; k++) {
      cout << symbol;
    }
    cout << endl;
  }


  return 0;
}