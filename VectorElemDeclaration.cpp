#include <iostream>
#include <vector>
using namespace std;

int main () {

 vector<int>V1 = {1,2,3,4,5,6};

 V1.push_back(7);
 V1.push_back(8);

 for (int i=0; i<8; i++) {
  cout << V1[i] << " ";
 }

  return 0;
}