// Concatenation Continued - Continuous Adding
#include <iostream>
#include <string>
using namespace std;

int main() {
  string msg = "Hello";
  msg += " ";       // dagdag space
  msg += "World";   // dagdag string
  msg += '!';       // dagdag char

  cout << msg;      // Hello World!
  return 0;
}

// Definition: Ang += ay nagdadagdag sa dulo ng existing string.
// Pwede mo ulit-ulitin para unti-unting mabuo ang string (continuous adding).
// Pareho lang ng: msg = msg + "World";