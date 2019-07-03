#include <iostream>

using namespace std;

int main()
{
    int age = 24;
    int *pAge = &age; // storing the pointers address inside a variable

    double gpa = 3.9;
    double *pGpa = &gpa;

    string name = "Vincent";
    string *pName = &name;

    /*
    Pointers are symbolic representation of addresses.
    They enable programs to simulate call-by-reference
    as well as to create and manipulate dynamic data structures
    */

    // printing the pointer of the above variables
    cout << "Age  : " << pAge << endl;
    cout << "GPA  : " << pGpa << endl;
    cout << "Name : " << pName << endl;

    cout << "------------------------\n";

    // D referencing the pointer
    cout << "Age  : " << *pAge << endl;
    cout << "GPA  : " << *pGpa << endl;
    cout << "Name : " << *pName << endl;

    cout << "------------------------\n";

    // Accessing the pointer and D referencing the pointer at the same time
    cout << "Age  : " << *&age << endl;
    cout << "GPA  : " << *&gpa << endl;
    cout << "Name : " << *&name << endl;

    return 0;
}
