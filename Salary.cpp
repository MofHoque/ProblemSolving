#include<iostream>
#include<iomanip>
using namespace std;

int main() {
  int num, hour;
  float amount;

  cin >> num >> hour >> amount;

  cout << "NUMBER = " << num << endl;

  float Salary = hour * amount;

  cout << "SALARY = U$ " << fixed << setprecision(2) << Salary << endl;

  return 0;
}
