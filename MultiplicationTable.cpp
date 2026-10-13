#include <iostream>
using namespace std;

int main () {

  int number; 

  cout << "Enter number: ";
  cin >> number;
  
  cout << "Multiplication table using FOR loop" << endl;
  for (int i=1; i<=10; i++) {
    cout << number << " * " << i << " = " << number*i << endl;
  }
  cout << endl;
  
  int k=1;
  cout << "Multiplication table using WHILE loop" << endl;
  while (k<=10) {
    cout << number << " * " << k << " = " << number*k << endl;
    k++;
  }



  return 0;
}