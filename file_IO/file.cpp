#include <iostream>
#include <fstream> // Library for reading and writing files

using namespace std;

int main()
{
    /*
    ofstream myfile; // for writing to a file
    ifstream myfile; // for reading a file
    fstream myfile; // for reading and writing a file

    myfile.open("filename"); // open the file

    myfile.close(); // close the file
    
     */

    string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    fstream myfileI("input.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI << "I am adding another line too.\n";
        myfileI.close();
    }
    else
        cout << "Unable to open file for writing";

    //create an input stream to write to the file
    fstream myfileO("input.txt");
    if (myfileO.is_open())
    {
        while (getline(myfileO, line))
        {
            cout << line << '\n';
        }
        myfileO.close();
    }

    else
        cout << "Unable to open file for reading";

    return 0;
}