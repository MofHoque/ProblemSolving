#include "fraction.h"
#include <iostream>
using namespace std;


Fraction::Fraction()
{
    firstNumber = 1;
    secondNumber = 1;
}

Fraction::Fraction(double first, double second)
{
    firstNumber = first;
    secondNumber = second;
}

Fraction::Fraction(Fraction &fractionObject){
  firstNumber=fractionObject.firstNumber;
  secondNumber=fractionObject.secondNumber;
  
}
bool Fraction::operator=(Fraction &fractionObject)
{
  return fractionObject.firstNumber == firstNumber && fractionObject.secondNumber == secondNumber;
}

void operator <<(ostream &os, Fraction &fractionObject){
  os << "firstNumber: " << fractionObject.firstNumber << endl;
  os << "second number: " << fractionObject.secondNumber << endl;
}

double Fraction:: Addition() {
  return firstNumber + secondNumber;
}

double Fraction:: Subtraction() {
  return firstNumber-secondNumber;
}
double Fraction:: Multiplication() {
  return firstNumber * secondNumber;
}

double Fraction:: Division() {
  return firstNumber/secondNumber;
}
