#include <iostream>
using namespace std;

int main () {
  
  int number;
  int i=1;

  cout << "Enter number: ";
  cin >> number;

  cout << "Subtraction Table WHILE loop" << endl;
  while (i<=10) {
    cout << number << " - " << i << " = " << number-i << endl;
    i++;
  }

  return 0;
}