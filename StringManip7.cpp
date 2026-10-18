// Inserting text into an existing string
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "Hello World";

  s.insert(5, " Beautiful");  // Hello Beautiful World
  s.insert(0, ">> ");         // >> Hello Beautiful World

  cout << s;
  return 0;
}

// Definition: Ang insert(pos, text) ay naglalagay ng text sa loob ng string
// sa index na `pos`. Yung mga characters na nasa pos pataas ay napapaurong.
// Binabago nito mismo ang original string.