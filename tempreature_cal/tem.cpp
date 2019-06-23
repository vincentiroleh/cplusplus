#include <iostream>
using namespace std;

int main() {
  double tempf;
  double tempc;

  cout << "Enter temperature in Fahrenheit\n";
  cin >> tempf;
  
  tempc = (tempf - 32)/1.8;
  cout << "The temperature in Aba is " << tempc << " degrees Celsius.\n";

  return 0;

}
