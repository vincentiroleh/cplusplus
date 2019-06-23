#include <iostream>

using namespace std;

int main()
{
    string color, pluralNoun, girlFriend;

    cout << "enter a color: ";
    getline(cin, color);

    cout << "enter a plural noun: ";
    getline(cin, pluralNoun);

    cout << "enter a girl friend's name: ";
    getline(cin, girlFriend);

    cout << "=========================================\n";
    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << girlFriend << endl;
    cout << "=========================================\n";
    return 0;
}
