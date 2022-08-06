#include <iostream>

using namespace std;

int main () {
double f;

cin >> f;

if(f<0.0000 || f>100.0000){
  cout << "Fora de Intervalo" << endl;
}

else if(f>0.0000 && f<=25.0000){
  cout << "Intervalo [0,25]" << endl;
}
 else if(f> 25.0000 && f<=50.0000){
  cout << "Intervalo (25,50]" << endl;
}
else if (f>50.0000 && f<=75.0000) {
  cout << "Intervalo (50,75]" << endl;
}
else if(f>75.0000 && f<=100.0000){
  cout << "Intervalo (75,100]" << endl;
}
else {
  cout << "Fora de Intervalo" << endl;
}
return 0;

}
