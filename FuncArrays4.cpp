// Example 4: Baguhin ang array sa loob ng function
#include <iostream>
using namespace std;

void doubleValues(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = arr[i] * 2;         // binabago mismo ang original
  }
}

int main() {
  int nums[4] = {1, 2, 3, 4};
  doubleValues(nums, 4);

  for (int i = 0; i < 4; i++) {
    cout << nums[i] << " ";      // 2 4 6 8
  }
  return 0;
}

// Definition: Ang arrays ay automatic na pass by reference.
// Kaya kapag binago mo ang array sa function, nababago rin ang original sa main().
// Hindi kailangan ng & para sa arrays.