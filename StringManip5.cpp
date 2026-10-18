// C++ String Methods - find and find_first_of
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "Hello World";

  size_t p1 = s.find("World");         // 6
  size_t p2 = s.find("xyz");           // string::npos (hindi nahanap)
  size_t p3 = s.find_first_of("aeiou"); // 1 (letter 'e')

  cout << p1 << endl;
  cout << p3 << endl;

  if (p2 == string::npos) {
    cout << "Not found";
  }
  return 0;
}

// Definition:
// find("text")        = hinahanap ang buong text, nagre-return ng index ng unang match
// find_first_of("abc") = hinahanap ang unang character na kapareho ng KAHIT ISA sa listahan
// string::npos        = special value na ibig sabihin "walang nahanap"