#include <iostream>
using namespace std;

void add(int a, int b) {
  cout << "Result: " << a+b << endl;
}
void sub(int c, int d) {
  cout << "Result: " << c-d << endl;
}
void mul(int e, int f) {
  cout << "Result: " << e*f << endl;
}
void divide(float g, float h) {
  if (h == 0) {
    cout << "Error: cannot divide by zero" << endl;
  }
  else {
    cout << "Result: " << g/h << endl;
  }
}

int main() {
  int choice;
  int x, y;

  do {
    cout << "===Menu Calculator===" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter option: ";
    cin >> choice;

    switch (choice) {
      case 1:
        cout << "Enter two numbers: ";
        cin >> x >> y;
        add(x,y);
        break;
      case 2:
        cout << "Enter two numbers: ";
        cin >> x >> y;
        sub(x,y);
        break;
      case 3: 
        cout << "Enter two numbers: ";
        cin >> x >> y;
        mul(x,y);
        break;
      case 4:
        cout << "Enter two numbers: ";
        cin >> x >> y;
        divide(x,y);
        break;
      case 5:
        cout << "Bye!" << endl;
        break;
      default:
        cout << "Invalid choice" << endl;
    }
  } while (choice != 5);

  return 0;
}