#include <iostream>

using namespace std;

void helloWorld(string greeting);

void sayHi(string name, int age) {
    cout << "Hello " << name <<  " you are " << age << " years old" << endl;
}
void sum(int num1, int num2) {
	cout << num1 + num2 << endl;
}

void sumAverage(){
    int num1, num2, num3, num4, sum;
    int size = 4;
    float average;

    cout << "Enter 4 integers :" << endl;
    cin >> num1 >> num2 >> num3 >> num4;
    sum = num1 + num2 + num3 + num4;
    average = sum/size;
    cout << "The sum of " << num1 << ", " << num2 << ", " << num3 << " and " << num4 << " is = " << sum << endl;
    cout << "The average of " << num1 << ", " << num2 << ", " << num3 << " and " << num4 << " is = " << average << endl;
}
void checkVC() {
    char ch;

    //Reading an alphabet from user
    cout<<"Enter any alphabet: ";
    cin>>ch;

    // checking vowel and consonant

     switch(ch)
    {
        case 'a': cout<<"a is a vowel\n";
            break;
        case 'e': cout<<"e is a vowel\n";
            break;
        case 'i': cout<<" i is a vowel\n";
            break;
        case 'o': cout<<"o is a vowel\n";
            break;
        case 'u': cout<<"u is a vowel\n";
            break;
        case 'A': cout<<"A is a vowel\n";
            break;
        case 'E': cout<<"E is a vowel\n";
            break;
        case 'I': cout<<"I is a vowel\n";
            break;
        case 'O': cout<<"O is a vowel\n";
            break;
        case 'U': cout<<"U is a vowel\n";
            break;
        default: cout<< ch << " is a consonant\n";
    }

}

int main()
{
    checkVC();
    sayHi("Vincent", 60);
    sayHi("iroleh", 19);
    helloWorld("Hello world");
    sum(5,5);
    sumAverage();

    return 0;
}

void helloWorld(string greeting){
    cout << greeting << endl;
};
