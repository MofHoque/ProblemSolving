#include<iostream>

using namespace std;

inline int product(int a, int b) {
  return a*b;
}

int main () {

  int a,b;
  cout << "Enter the value of a and b: " ;
  cin >> a >> b;

  cout << "The product of a and b: " << product(a,b) << endl;

}
