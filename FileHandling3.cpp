// Example 3: Appending (dagdag sa dulo, hindi buburahin ang laman)
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ofstream file("names.txt", ios::app);  // append mode

  string name;
  cout << "Enter name: ";
  getline(cin, name);

  file << name << endl;
  file.close();

  cout << "Added!";
  return 0;
}

// Definition: Ang ios::app ay mode na nagdadagdag sa dulo ng file
// imbes na burahin ang dating laman.
// Pwede mong i-run ulit ang Example 2 para makita ang bagong name.