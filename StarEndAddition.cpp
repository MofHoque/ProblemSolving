#include <iostream>

using namespace std;

int summation(int start, int end){
  int sum = 0;
  for(int i = start; i<=end; i++){
    sum +=i;
  }
  return  sum;
}
int main () {
  int min, max;

  cout << "Enter minimum value: ";
  cin >> min;

  cout << "Enter maximum value: ";
  cin >> max;

  cout << "The summation of the specified range is : " << summation(min, max) << endl;

  return 0;
}
