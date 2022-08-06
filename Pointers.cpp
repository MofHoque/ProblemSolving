#include<iostream>

using namespace std;

int main () {

// data type that holds the address of other data types

int a = 3;
int* b = &a;
        // &---> Address of operator
        //*---->Dereference operator
cout << b;

  return 0;
}
