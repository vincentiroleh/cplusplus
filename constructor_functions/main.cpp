#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        Book() {
            title = "No title";
            author = "No author";
            pages = 0;

        }
        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }

};

class Person {
    public:
        string fullName;
        int age;
        string country;
        string occupation;
        Person(string aFullName, int aAge, string aCountry, string aOccupation) {
                fullName = aFullName;
                age = aAge;
                country = aCountry;
                occupation = aOccupation;
        }
};

int main()
{

    Book book1("The Secret", "Rhonda Byrne", 198);

    Book book2("Rich Dad Poor Dad", "Robert T. Kiyosak", 207);

    Book book3;

    Person person1("Vincent Iroleh", 24, "Nigeria", "Software Engineer");

    // cout << book1.title;
    cout << book3.title << endl;
    cout << "\nMy name is " << person1.fullName << ", \nI am " << person1.age << " years old, " << " \n\I am a " << person1.occupation << " from " << person1.country << endl;
    return 0;
}
