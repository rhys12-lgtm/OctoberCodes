#include <iostream>
#include <string>
using namespace std;

// Concatenation = pagdudugtong ng strings para maging isa.
int main() {

  string s1 = "Hello";   // unang string
  string s2 = "World";   // pangalawang string
  char exclaim = '!';    // single character (char), hindi string

  // Dinudugtong gamit ang + operator: "Hello" + " " + "World" + '!'
  // Yung " " ay para may space sa gitna ng Hello at World
  string s3 = s1 + " " + s2 + exclaim;

  cout << s3;  // Output: Hello World!

  return 0;
}