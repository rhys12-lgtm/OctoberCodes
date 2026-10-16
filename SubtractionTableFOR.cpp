#include <iostream>
using namespace std;

int main () {

  int number;

  cout << "Enter number: ";
  cin >> number;

  cout << "Subtraction Table FOR loop" << endl;
  for (int i=1; i<=10; i++) {
    cout << number << " - " << i << " = " << number-i << endl;
  }


  return 0;
}