#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int leap_year() {
  int year = 0;

  std::cout << "Enter year: ";
  std::cin >> year;

  if (year < 0 || year > 9999) {
    std::cout << "Invalid entry.\n";
  } else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    std::cout << year << " falls on a leap year.\n";
  } else {
    std::cout << year << endl;

  }

}

int main() {
    // call the leap_year function
    leap_year();

    // Create a number that's 0 or 1

    srand(time(NULL));
    int coin = rand() % 2;

   /*
        If number is 0: Heads
        if it is not 0: Tails
    */

   if (coin == 0)
   {
       cout << "Heads\n";
   } else
   {
       cout << "Tails\n";
   }


}
