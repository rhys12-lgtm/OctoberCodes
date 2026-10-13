#include <iostream>
using namespace std;

int main () {
  int secret = 609;
  int guess = 0;

  while (guess != secret) {
    cout << "Guess the number 1-1000: ";
    cin >> guess;

    if (cin.fail()) {
      cout << "Oops! Invalid";
      return 1;
    }

    if (guess < 1 || guess > 1000) {
      cout << "1-1000 lang!\n";
    }
    else if (guess < 100) {
      cout << "You're still far ahead buddy\n";
    }
    else if (guess < 200) {
      cout << "Nope, still far ahead!\n";
    }
    else if (guess < 300) {
      cout << "Try guessing with a larger number\n";
    }
    else if (guess < 400) {
      cout << "You're close but not quite!\n";
    }
    else if (guess < 500) {
      cout << "More bro, you can do it\n";
    }
    else if (guess < 600) {
      cout << "Now you're getting close\n";
    }
    else if (guess < secret) {
      cout << "It's getting hot!\n";
    }
    else if (guess == secret) {
      cout << "Jackpot!\n";
    }
    else {
      cout << "Too much!\n";
    }
  }

  return 0;
}