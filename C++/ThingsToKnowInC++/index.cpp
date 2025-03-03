#include <iostream>
#include <string>

using namespace std;

int main()
{
    // -----> Printing string <----- \\

    string str;
    cout << "Enter your name" << endl;
    getline(cin, str);
    cout << "Full Name: " << str << endl;
    return 0;
}
