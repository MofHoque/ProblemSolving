#include<iostream>
#include<iomanip>

using namespace std;

int main () {
  int a, b, c, d;
  float m, n;

  cin >> a >> c >> m;
  //cout << endl;

  cin >> b >> d >> n;

  float total1 =(c*m);
  float total2 =(d*n);

  float value = total1 + total2;

  cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << value << endl;

  return 0;
}
