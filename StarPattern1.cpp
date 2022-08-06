#include <iostream>

using namespace std;

int main () {
  int size;

  while(true) {
    cout << "Enter an odd integer or -1 to exit: ";
    cin >> size;

    if(size==-1)
    exit(1);

    if(size %2==0){
      cout << "Must enter an odd integer, try again\n";
      continue;
    }
    for(int row =0; row<size; row++){
      for(int col = 0; col< size; col++){
        if(col>row){
          cout << "- ";
        }else
        {
          cout << "* ";
        }
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
