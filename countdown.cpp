#include <iostream>

using namespace std;
void countDown(int n) {
  cout << n << endl;
  if(n>1)
    countDown(n-1);

}
int main () {
  int n;
  cout << "Enter a number: " ;
  cin >> n;

  countDown(n);

  cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!";

  return 0;
}
