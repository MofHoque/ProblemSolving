#include <iostream>

using namespace std;
int add(int a, int b){
  return a+b;
}
int add (int a,int b, int c){
  return a+b+c;
}
int main () {

  cout << "The sum of 1 and 2 is " << add(1,2) << endl;
  cout << "The sum of 1 2 3 is " << add(1,2,3) << endl;
}
