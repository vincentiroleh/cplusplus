#include <iostream>
#include <cmath> // importing math functions

using namespace std;

int main()
{
// printing characters to the console
cout << "Hello World!" << endl;

// Varibles
string personsName;
int personsAge;

personsName = "Vincent";
personsAge = 20;

cout << "There once was man named " << personsName << endl;
cout << "He was " << personsAge << " years old" << endl;
cout << "He likes computers so much" << endl;
cout << "But did not like being " << personsAge << endl;

// Data types
char grade = 'A';
string phrase = "Iroleh Script";
int age = 24;
float ageDecimal = 24.8;
double gpa = 3.5;
bool isMale = true;
bool isFemale = false;

// working with strings
cout << personsName.length() << endl;
personsName[0] = 'I';
cout << phrase.find("Script", 0) << endl;
cout << phrase.substr(7, 3) << endl;


// working with numbers
cout << 5 * 5 << endl;
cout << 10 % 4 << endl;

int wnum = 5;
double dnum = 5.5;

wnum++;
wnum += 5;
cout << wnum << endl;

// math functions
cout << pow(2, 5) << endl;
cout << sqrt(36) << endl;
cout << round(4.6) << endl;
cout << ceil(4.6980) << endl;
cout << floor(4.6) << endl;
cout << fmax(4,6) << endl;
cout << fmin(4,6) << endl;


// collecting inputs

    // collecting strings
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello " << name << endl;


    // collecting integers
    int yourAge;
    cout << "Enter your age: ";
    cin >> yourAge;
    cout << "You are " << yourAge << " years old " << name;

return 0;

}


