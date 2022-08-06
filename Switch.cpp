#include <iostream>
using namespace std;

string getDayOfWeek(int dayNum){
  string dayName;

  switch (dayNum) {
      case 1:
        dayName = "Monday";
        break;
      case 2:
          dayName = "Tuesday";
          break;
      case 3:
            dayName = "Wednesday";
            break;
      case 4:
            dayName = "Thursday";
            break;
      case 5:
            dayName = "Friday";
            break;
      case 6:
            dayName = "Saturday";
            break;
      case 7:
            dayName = "Sunday";
            break;
      default:
            dayName = "Invalid Day Number";

  }
  return dayName;
}

int main() {
  int day;

  cin >> day;
  cout <<  getDayOfWeek(day);



  return 0;

}
