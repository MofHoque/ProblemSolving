#include<iostream>
#include<iomanip>

using namespace std;

int main() {

  double pi = 3.14159;
  int f;

  cin >> f;

  //float radius = f*f*f;

  double volume = (4/3.0*pi*f*f*f);

  cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;

  return 0;
}
