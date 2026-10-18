// Removing Specific Text from a String
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "Hello Beautiful World";
  string target = "Beautiful ";

  size_t pos = s.find(target);      // hanapin muna kung nasaan
  if (pos != string::npos) {        // check kung nahanap
    s.erase(pos, target.length());  // tanggalin gamit haba ng target
  }

  cout << s;  // Hello World
  return 0;
}

// Definition: Para tanggalin ang specific na text, pagsamahin ang find() at erase().
// 1) find() para makuha ang index ng text
// 2) erase(pos, length) para burahin ito
// Laging i-check kung != string::npos para hindi mag-error kapag wala ang text.