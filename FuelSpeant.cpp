#include <iostream>
#include<iomanip>

using namespace std;

int main ()
{
  int hours, speed;

  cin >> hours;
  cin >> speed;
  int distance = hours * speed;

  double liters = distance / 12.0;

  cout << fixed << setprecision(3) << liters << endl;

  return 0;

}
