#include <iostream>

using namespace std;

int main()
{
    int year;
    int age;
    string name;

    //print a message to the user
    cout << "What year is your favorite? " << endl;
    cin >> year; //get the user response and assign it to the variable year

    //output response to user
    cout << "How interesting, your favorite year is " << year << "!" << endl;

    //print a message to the user
    cout << "At what age did you learn to code? " << endl;
    cin >> age; //get the user response and assign it to the variable age

    //output response to user
    cout << "How interesting you learned to code at " << age << "!\n"
         << endl;

    cout << "What is your name? " << endl;
    cin >> name; //get the user response and assign it to the variable name

    cout << "Hello " << name << endl; // print a message to the user, with their name

    return 0;
}