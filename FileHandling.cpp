// Example 1: Writing to a file (gagawa ng bagong file)
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ofstream file("names.txt");   // output file stream

  file << "Juan" << endl;
  file << "Maria" << endl;
  file << "Pedro" << endl;

  file.close();                 // laging i-close
  cout << "Saved!";
  return 0;
}

// Definition: Ang ofstream ay para magsulat sa file.
// Kapag may laman na ang file, mabubura at papalitan ito.