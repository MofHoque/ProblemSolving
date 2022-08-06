#include<iostream>
#include<iomanip>
using namespace std;

int main () {



  double a, b , c;

  cin >> a >> b >> c;
  cout << fixed;

  cout << setprecision(1);

  if(a<b+c && b<a+c && c<a+b){
    cout << "Perimetro = " << a+b+c << endl;
  }
  else {
    cout << "Area = " << c*(a+b)/2 << endl;
  }
  return 0;
}
