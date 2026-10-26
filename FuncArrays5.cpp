// Example 5: Gamitin ang const para hindi mabago ang array
#include <iostream>
using namespace std;

double getAverage(const int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
    // arr[i] = 0;   // ERROR kapag in-uncomment, dahil const
  }
  return (double)sum / size;
}

int main() {
  int grades[4] = {85, 90, 78, 92};
  cout << "Average: " << getAverage(grades, 4);   // Average: 86.25
  return 0;
}

// Definition: Ang const sa parameter ay proteksyon para hindi mabago ang array
// ng function. Maganda gamitin kapag basa lang ang kailangan (print, sum, average).
// Ang (double) ay para may decimal ang result.