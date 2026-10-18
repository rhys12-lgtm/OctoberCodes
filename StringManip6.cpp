// ASCII Values - C++
#include <iostream>
using namespace std;

int main() {
  char c = 'A';
  cout << (int)c << endl;        // 65  (char to ASCII number)

  int n = 97;
  cout << (char)n << endl;       // a   (ASCII number to char)

  cout << (char)(c + 1) << endl; // B   (next letter)
  cout << ('a' - 'A') << endl;   // 32  (difference ng lowercase at uppercase)
  return 0;
}

// Definition: Ang ASCII ay code kung saan may katumbas na number ang bawat character.
// 'A' = 65, 'a' = 97, '0' = 48. Ang char ay number din sa loob.
// I-cast gamit (int) para makita ang number, (char) para maging letter ulit.