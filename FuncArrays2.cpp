// Example 2: Sum ng array (function na may return)
#include <iostream>
using namespace std;

int getSum(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  int scores[4] = {80, 90, 70, 100};
  cout << "Total: " << getSum(scores, 4);   // Total: 340
  return 0;
}

// Definition: Ang function ay pwedeng magbasa ng array at mag-return ng isang value
// (sum, average, highest, etc.).