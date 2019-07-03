#include <iostream>

using namespace std;

class Chef {
    public:
        void makeChicken() {
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad() {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish() {
            cout << "The chef makes bbq ribs" << endl;
        }
};

class NigerianChef : public Chef {
    public:
        void makeJollofRice() {
            cout << "The chef makes Nigerian Jollof Rice" << endl;
        }
        void makeSpecialDish() {
            cout << "The chef makes isi ewu" << endl;
        }
};


int main()
{

    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    NigerianChef nigerianChef;
    nigerianChef.makeSpecialDish();
    nigerianChef.makeJollofRice();

    return 0;
}
