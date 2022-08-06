#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    double A,B,C, Media;

    cin >> A >> B >> C;

    Media = (A*2+B*3+C*5)/(2+3+5);

    cout << "MEDIA = " << fixed << setprecision(1) << Media << endl;

    return 0;
}