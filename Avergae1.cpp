#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    float A, B;
    cin >> A >> B;

  float  med = A+B;

    double MEDIA = med % 2;

    cout << "MEDIA = " << fixed << setprecision(5) << MEDIA << endl;

    return 0;
}
