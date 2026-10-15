#include <iostream>
using namespace std;

int main () {

  int Array[3][8] = {
    {1,2,3,4,5,6,7,8},
    {9,10,11,12,13,14},
    {15,16,17,18,19,20}
  };

  for (int i=0; i<3; i++) {
    for (int k=0; k<8; k++) {
      cout << Array[i][k] << " ";
    }
    cout << endl;
  }

  return 0;
}