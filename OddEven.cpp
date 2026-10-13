#include <iostream>
using namespace std;

int main () {
    int number;

    cout << "Enter number: ";
    cin >> number;

    if (cin.fail()) {
      cout << "Invalid! Please enter a number...";
      return 1;

    }
    if (number % 2 == 0) {
      cout << number << " is " << "even.";
    }
    else {
      cout << number << " is " << "odd";
    }

  return 0;
}