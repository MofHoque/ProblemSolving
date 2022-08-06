#include<iostream>
#include <iomanip>

using namespace std;

int main() {
  float n1,n2,n3,n4, exam, average;
  cin >> n1 >> n2 >> n3 >> n4;
//  cin >> exam;

  average = (n2*2+n2*3+n3*4+n4*1)/10;

  if(average>=7.00){
    cout << "Alumo aprovado" << endl;
  }
  // else if(average<=5.00){
  //
  // }
  else if(average>=5.00)
  {

    cout << "Alumo em exame" << endl;
    cin >> exam;
    cout << "Nota do exame: " << exam << endl;

      if(average + exam/2.0>5.0)
      {
      cout <<"Alumo approvado" <<endl;
      }
      else {
        cout << "Alumo reprovado" << endl;
      }
    cout << "Media Final: " << (average+exam)/2.0 << endl;
  }
  else {
    cout << "Aluno reprovado" << endl;
  }
  return 0;
}
