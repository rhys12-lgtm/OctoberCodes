#include <iostream>
using namespace std;

int main () {
  int number;
  int i = 1;

  cout << "Enter number: ";
  cin >> number;

  cout << "Subtraction Table for Do-While loop" << endl;
  do {
    cout << number << " - " << i << " = " << number-i << endl;
    i++;
  } while (i<=10);

  return 0;
}