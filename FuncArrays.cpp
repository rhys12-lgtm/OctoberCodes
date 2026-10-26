// Example 1: Pass array sa function (print lahat)
#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int nums[5] = {10, 20, 30, 40, 50};
  printArray(nums, 5);   // 10 20 30 40 50
  return 0;
}

// Definition: Kapag nagpapasa ng array sa function, kailangan ipasa rin ang size
// kasi hindi alam ng function kung gaano kahaba ang array.