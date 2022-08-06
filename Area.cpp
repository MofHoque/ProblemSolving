#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double pi = 3.14159;
  float A,B,C;
  cin >> A >> B >> C;

  double AreaOfTriangle = 1/2.0*A*C;
  double AreaOfCircle = pi*C*C;
  double AreaofTrapezium = 1/2.0*(A+B)*C;
  double AreaOfSquare = B*B;
  double AreaOfRectangle = A*B;

  cout << "TRIANGULO: " << fixed << setprecision(3) << AreaOfTriangle << endl;
  cout << "CIRCULO: "  << fixed << setprecision(3) << AreaOfCircle << endl;
  cout << "TRAPEZIO: " << fixed << setprecision(3) << AreaofTrapezium << endl;
  cout << "QUADRADO: " << fixed << setprecision(3) << AreaOfSquare << endl;
  cout << "RETANGULO: " << fixed << setprecision(3) << AreaOfRectangle << endl;

  return 0;
}
