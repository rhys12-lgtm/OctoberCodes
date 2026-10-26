// Topic 4: Array of Objects
#include <iostream>
#include <string>
using namespace std;

class Pet {
  public:
    string name;
    string type;
};

int main() {
  Pet pets[3];

  pets[0].name = "Bantay";
  pets[0].type = "Dog";
  pets[1].name = "Mingming";
  pets[1].type = "Cat";
  pets[2].name = "Tweety";
  pets[2].type = "Bird";

  for (int i = 0; i < 3; i++) {
    cout << pets[i].name << " is a " << pets[i].type << "\n";
  }
  return 0;
}