#include <iostream>
using namespace std;

int main () {
  int days;

  cin >> days;

  int years = days /365;

  int months = days % 365 /30;

   days = days % 365 % 30;

  cout << years << " ano(s)" << endl;
  cout << months << " mes(es)" << endl;
  cout << days << " dia(s)" << endl;

  return 0;
}
