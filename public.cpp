#include <iostream>
using namespace std;


// class Circle {
// public:
//   double radius;
//
//   double computeArea() {
//     return 3.14 * radius *radius;
//   }
// };
// int main () {
//   Circle obj;
//
//   obj.radius = 5;
//
//   cout << "area is " << obj.computeArea() ;
//
// }
class Books {
public:
  string author;
  int page;
  string genre;

void printInfo () {
  cout << " Author: " << author << " page number: " << page << " genre: " << genre << endl;
}
};

int main () {
  Books book1;

book1.author = "james clear ";
book1.page = 350;
book1.genre = " Self-Development";


book1.printInfo();

return 0;
}
