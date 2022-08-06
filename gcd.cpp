#include <iostream>

using namespace std;
int gcd(int n1, int n2){
  if(n2 !=0){
    return(n2, n1%n2);
  }else
  return n1;
}


int main () {
  int a, b;

  cout << "Enter 2 integer: ";

  cin >> a >>b;

  cout << "gcd of entered number is: " << gcd(a,b) << endl;

  return 0;
}
