#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors() {
            if (gpa >= 3.5) {
                return true;
            }
            return false;
        }
};

int main()
{

    Student student1("Vincent", "Engineering", 3.9);
    Student student2("Anita", "Science", 4.9);
    Student student3("Mark", "Art", 2.9);

    cout << student3.hasHonors();
    return 0;
}
