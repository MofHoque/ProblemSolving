#include <iostream>
using namespace std;

class Fraction
{
    double firstNumber;
    double secondNumber;

public:
    Fraction();
    Fraction(double first, double second);
    Fraction(Fraction& fractionObject);
    bool operator=(Fraction& fractionObject);
    friend void operator<<(ostream& os, Fraction& fractionObject);
    double Addition();
    double Subtraction();
    double Division();
    double Multiplication();
  //  double Simplify();
};
