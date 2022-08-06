#include<iostream>

using namespace std;

int main() {
      int A[] = {4,8,6,9,5,2,7};
      int sum = 0;

      for(int i = 0;i < 7; i++){

        cout << A[i] << endl;
        sum = sum + A[i];
      }
      cout << "Sum is: " << sum << endl;

      return 0;
}
