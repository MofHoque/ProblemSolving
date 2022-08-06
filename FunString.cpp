#include<iostream>

using namespace std;

void hello(string n){
  cout << "Hello " << n << endl;
}
int main () {
string name;

cin >> name;

hello(name);

return 0;


}
