#include <iostream>
#include <string>
using namespace std;

class Car {
  public:
    string brand;
    string model;
    int year;

    // simple function inside the class
    void showInfo() {
      cout << brand << " " << model << " " << year << "\n";
    }
};

int main() {
  Car car1;
  car1.brand = "BMW";
  car1.model = "X5";
  car1.year = 1999;

  Car car2;
  car2.brand = "Ford";
  car2.model = "Mustang";
  car2.year = 1969;

  // call the function instead of repeating cout
  car1.showInfo();
  car2.showInfo();

  // change a value
  car1.year = 2020;
  car1.showInfo();

  return 0;
}