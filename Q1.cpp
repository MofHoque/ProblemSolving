#include <iostream>

using namespace std;

int main () {
  int num = 0;
  while(num!=-1){
    cout << "Enter an odd integer or -1 to quit: ";
    cin >> num;
    if(num%2==0){
      cout << "Must enter an odd integer, try again : ";
      cout << "\n\n";
    }else
    {
      for(int m=1; m<=num; m++){
        for(int n=1;n<=m;n++){
          cout << "*";
        }
        for(int j=(num-m-1);j>=0;j--){
          cout << "-";
        }
        cout << "\n";
      }
      cout << "\n";
    }
  }
  cout << "End of program.";

  return 0;
}
