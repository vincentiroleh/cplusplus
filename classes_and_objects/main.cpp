#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
};

class Person {
    public:
        string fullName;
        int age;
        string country;
        string occupation;
};

int main()
{
    Book book1;
    book1.title = "The Secret";
    book1.author = "Rhonda Byrne";
    book1.pages = 198;

    Book book2;
    book2.title = "Rich Dad Poor Dad";
    book2.author = "Robert T. Kiyosak";
    book2.pages = 207;

    Person person1;
    person1.fullName = "Vincent Iroleh";
    person1.age = 24;
    person1.country = "Nigeria";
    person1.occupation = "Software Engineer";

    // cout << book1.title;
    cout << "My name is " << person1.fullName << ", \nI am " << person1.age << " years old, " << " \n\I am a " << person1.occupation << " from " << person1.country << endl;
    return 0;
}
