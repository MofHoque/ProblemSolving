#include <iostream>
using namespace std;

int main () {
  int num,count=0;

  for(int i =1; i<=5; i++){
    cin >>num;
    if(num%2==0){
      count++;
    }
  }
  cout << count << " valores pares" << endl;
}
