#include <iostream>
using namespace std;


int main() {
int num, evenCount =0, oddCount = 0, posCount = 0, negCount = 0;

for(int i=1; i<=5; i++){
  cin >> num;

  if(num%2==0){
    evenCount++;
  }
  if(num%2!=0){
    oddCount++;
  }
  if(num>0){
    posCount++;
  }
  if(num<0){
    negCount++;
  }
}

cout << evenCount << " valores pares" << endl;
cout << oddCount << " valores impares" << endl;
cout << posCount << " valores positivos" << endl;
cout << negCount << " valores negativos" << endl;


return 0;



}
