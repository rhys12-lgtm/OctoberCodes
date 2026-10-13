#include <iostream>
using namespace std;

int main () {
  double balance = 1000;
  double amount;
  int choice;

  cout << "===ATM===" << endl;
  cout << "1. Deposit" << endl;
  cout << "2. Withdraw" << endl;
  cout << "3. Balance" << endl;
  cout << "4. Exit" << endl;
  cout << "Enter option: ";
  cin >> choice;

  if (choice==1) {
    cout << "Enter amount: ";
    cin >> amount;

      if (cin.fail()) {
        cout << "Error";
      }
      else {
        balance+=amount;
        cout << "Your new balance is " << balance;
      }
  }

  else if (choice==2) {
    cout << "Enter amount: ";
    cin >> amount;

      if (amount>balance) {
        cout << "Not enough balance";
      }
      else if (cin.fail()) {
        cout << "Error";
      }
      else {
        balance-=amount;
        cout << "Your new balance is " << balance;
      }
  }
  
  else if (choice==3) {
    cout << "Your current balance is " << balance;
  }

  else if (choice==4) {
    cout << "Thank you for availing our service!";
  }
  else {
    cout << "Invalid option!";
  }


  return 0;
}