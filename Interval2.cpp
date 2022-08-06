#include <iostream>

using namespace std;

int main() {

int n, val;
cin >> n;

int in=0,out =0;
for(int  i =0; i<n; i++){
cin >> val;
if(val>=10 && val<=20){
  in++;
}
else{
  out++;
}
}
cout << in << " in" << endl;
cout << out << " out" << endl;

  return 0;
}
