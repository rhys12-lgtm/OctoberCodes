// Example 2: Reading from a file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream file("names.txt");   // input file stream
  string line;

  if (!file) {                  // check kung nabuksan
    cout << "File not found";
    return 0;
  }

  while (getline(file, line)) { // basa isa-isang line hanggang dulo
    cout << line << endl;
  }

  file.close();
  return 0;
}

// Definition: Ang ifstream ay para magbasa ng file.
// Ang getline(file, line) ay kumukuha ng isang buong line at nagre-return ng false
// kapag wala nang mababasa, kaya gamit sa while loop.