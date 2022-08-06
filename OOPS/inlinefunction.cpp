#include <iostream>
using namespace std;
class Geeks{
public:
  string geekname;
  int id;

  void printname();

  void printId() {
    cout << "The id is: " << id << endl; //member function
  }
};
void Geeks :: printname() { // printname using scope resolution operator
  cout << "THe name is: " << geekname << endl;

}

int main(){
Geeks person1; // object

person1.geekname = "Jishan";
person1.id = 45;

person1.printId();
person1.printname();


Geeks person2;
person2.geekname = "Harry";
person2.id = 7;

person2.printId();
person2.printname();
  }
