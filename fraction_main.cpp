#include<iostream>
#include "fraction.cpp"



using namespace std;


int main ()
{
  Fraction f1(2, 3);
   cout << "f1 : " << endl;
   cout << f1;
   cout << "Addition: " << f1.Addition() << endl;
   cout << "Subtraction: " << f1.Subtraction() << endl;
   cout << "Multiplication: " << f1.Multiplication() << endl;
   cout << "Division: " << f1.Division() << endl;
  Fraction f2;
   cout << "f2 : " << endl;
   cout << f2;
   cout << "Equality of f1 and f2 : " << (f1 = f2) << endl;
   return 0;
}
