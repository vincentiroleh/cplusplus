#include <iostream>

using namespace std;

int main()
{
    const string name = "Vincent Iroleh";
    // name = "Iroleh"; // An error message because name cannot be changed

    // Enumerated constants
    enum MONTH
    {
        Jan,
        Feb,
        Mar,
        Apr,
        May,
        Jun,
        Jul,
        Aug,
        Sep,
        Oct,
        Nov,
        Dec
    };

    MONTH bestMonth;

    bestMonth = Apr;

    if(bestMonth == Apr) {
        cout << "I'm so sure April is the best month\n";
    }

    return 0;
}