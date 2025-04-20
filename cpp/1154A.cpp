#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int a, b, c, d, n;
  vector <int> array;
  for (int i; i < 4; i++){
    cin >> n;
    array.push_back(n);
    }
  sort(array.begin(),array.end());
  cout << array[3]-array[0] << " " <<  array[3]-array[1] << " " << array[3]-array[2] <<endl;
}