#include <iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main () {
  double a,b,c, r1, r2;
  cin >> a >>b >> c;

  r1 = (-b+(sqrt(b*b-4*a*c)))/(2*a);
  r2 = (-b-(sqrt(b*b-4*a*c)))/(2*a);


  if(a==0 || b<c){
    cout << "Impossivel calcular" << endl;
  }else {
    cout << fixed << setprecision(5) << r1 << endl;
    cout << fixed << setprecision(5) << r2 << endl;
  }

}
