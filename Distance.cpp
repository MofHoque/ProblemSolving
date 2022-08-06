#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {


  double x1,x2,y1,y2;
  cin >> x1 >> y1;
  cin >> x2 >> y2;

  double x = (x2-x1)*(x2-x1);
  double y = (y2-y1)*(y2-y1);
  double dis = x+y;

  double distance = sqrt(dis);

  cout << fixed << setprecision(4) <<distance << endl;

  return 0;
}
