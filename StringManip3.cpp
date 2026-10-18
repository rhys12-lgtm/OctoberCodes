// Removing Characters from Strings
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "Hello World!";

  s.pop_back();     // Hello World   (tanggal last char)
  s.erase(0, 1);    // ello World    (tanggal 1 char simula index 0)
  s.erase(4);       // ello          (tanggal lahat simula index 4)
  cout << s << endl;

  s.clear();        // empty na ang string
  cout << s.length();  // 0
  return 0;
}

// Definition:
// pop_back()      = tanggalin ang huling character
// erase(pos, len) = tanggalin ang `len` na characters simula sa `pos`
// erase(pos)      = tanggalin lahat simula sa `pos` hanggang dulo
// clear()         = burahin ang buong string