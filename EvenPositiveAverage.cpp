#include <iostream>

using namespace std;

int main () {
  float num, sum = 0;
  int count = 0;
  for(int i=1; i<=6; i++){
    cin >> num;
    if(num>0){
      sum = sum + num;
      count++;
    }
  }
  float average = sum / count;

  cout << count << " valores positivos" << endl;

  cout << average << endl;


  return 0;
}
