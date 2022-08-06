#include <iostream>
using namespace std;



// class Employee
// {
//   private:
//       int a,b,c;
//   public:
//       int d, e;
//       void setData(int a1,int b1,int c1);
//       void getData(){
//         cout << "The value of: " << a << endl;
//         cout << "The value of: " << b << endl;
//         cout << "The value of: " << c << endl;
//         cout << "The value of: " << d << endl;
//         cout << "The value of: " << e << endl;
//
//       }
// };
// void Employee:: setData(int a1, int b1, int c1){
//   a = a1;
//   b =b1;
//   c= c1;
// }
//
// int main () {
//
//   Employee harry;
//   harry.setData(1,2,5);
//   harry.getData();
//   return 0;
// }
class Geeks {
public:
  string geekname;

  void printname(){
    cout << "Geekname is " << geekname;
  }
};

int main () {
  Geeks person1;
  person1.geekname = "Jishan";

  person1.printname();
}
