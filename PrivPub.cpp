// Topic 3: Private and Public
#include <iostream>
using namespace std;

class BankAccount {
  private:
    int balance;

  public:
    BankAccount() {
      balance = 0;
    }
    void deposit(int amount) {
      balance = balance + amount;
    }
    void withdraw(int amount) {
      if (amount <= balance) {
        balance = balance - amount;
      } else {
        cout << "Not enough money\n";
      }
    }
    void showBalance() {
      cout << "Balance: " << balance << "\n";
    }
};

int main() {
  BankAccount acc;
  acc.deposit(500);
  acc.withdraw(200);
  acc.showBalance();
  acc.withdraw(1000);
  return 0;
}