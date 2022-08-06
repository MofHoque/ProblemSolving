#include <iostream>

using namespace std;

void printFactors(int num){
  cout << "The factors of " << num << " are ";
  for(int i =1; i<=num; i++){
    if(num%i==0){
      cout << i << " ";
    }
  }
}

int main () {
  int val;
  while(true){
    cout << "Enter an integer or -1 to exit: ";

    cin >> val;

    if(val == -1){
      cout << "Exit program\n";
      exit(1);
    }
    printFactors(val);
    cout << endl;
  }
  return 0;
}
