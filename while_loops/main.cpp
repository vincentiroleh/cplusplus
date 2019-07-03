#include <iostream>

using namespace std;

int main()
{
    // while loop
    int index = 1;

    while(index <= 5) {
        cout << index << endl;
        index++;
    }

    // do... while loop
    cout << "do... while loop\n";
    int num = 7;
    do {
        cout << num << endl;
        num++;

    } while (num <= 6);


    return 0;
}
