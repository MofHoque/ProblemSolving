#include <iostream>

using namespace std;
int reverse(int n){
int number = 0;
while(n>0){
  number = number*10+ n%10;
  n = n /10;
}
return number;
}


int main () {
  int a;

  cout << "Enter number: ";
  cin >> a;

  cout << reverse(a);

  return 0;
}
