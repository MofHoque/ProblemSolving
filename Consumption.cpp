#include<iostream>
#include<iomanip>

using namespace std;

int main () {
  int X;
  float Y;
  cin >> X >> Y;

  float avg = X/Y;

  cout << fixed << setprecision(3);
  cout << avg  << " km/l";

  return 0;
}
