#include <iostream>
using namespace std;

int main () {

  int number1;
  int number2;
  int number3;
  int sum;
  
  cout << "===GRADE CALCULATOR===" << endl;
  
  cout << "Enter score number 1: ";
  cin >> number1;

  cout << "Enter score number 2: ";
  cin >> number2;

  cout << "Enter score number 3: ";
  cin >> number3;

  sum = number1 + number2 + number3;

  if (number1 < 0 || number1 > 100 ||
      number2 < 0 || number2 > 100 ||
      number3 < 0 || number3 > 100) {
    cout << "Invalid score" << endl;
  }
  else if (sum == 300) {
    cout << "remarkable" << endl;
  }
  else if (sum >= 200) {
    cout << "passed" << endl;
  }
  else {
    cout << "failed" << endl;
  }

  return 0;
}