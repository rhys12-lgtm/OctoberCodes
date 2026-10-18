// C++ string substr
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "Hello World";

  string a = s.substr(0, 5);  // Hello  (start index 0, 5 chars)
  string b = s.substr(6);     // World  (start index 6 hanggang dulo)

  cout << a << endl;
  cout << b << endl;
  return 0;
}

// Definition: Ang substr(pos, len) ay kumukuha ng bahagi (substring) ng string
// simula sa index `pos` na may haba na `len`. Kapag walang `len`, hanggang dulo.
// Hindi nito binabago ang original string, nagre-return lang ng bagong string.