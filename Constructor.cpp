// Topic 1: Constructor
#include <iostream>
#include <string>
using namespace std;

class Student {
  public:
    string name;
    int age;

    Student(string n, int a) {
      name = n;
      age = a;
    }
};

int main() {
  Student s1("Juan", 18);
  Student s2("Maria", 19);

  cout << s1.name << " " << s1.age << "\n";
  cout << s2.name << " " << s2.age << "\n";
  return 0;
}