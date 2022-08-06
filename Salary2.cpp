#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  string name;
  double salary, sale;

  cin >> name >> salary >> sale;

  double commission = sale*0.15;

  double total = commission + salary;

  cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;

  return 0;
}
