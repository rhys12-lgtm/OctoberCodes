// Example 3: Hanapin ang pinakamataas na value
#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
  int max = arr[0];              // simulan sa unang element
  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int main() {
  int nums[5] = {12, 45, 7, 89, 23};
  cout << "Highest: " << findMax(nums, 5);   // Highest: 89
  return 0;
}

// Definition: I-compare ang bawat element sa kasalukuyang max.
// Kapag mas malaki, yun na ang bagong max.