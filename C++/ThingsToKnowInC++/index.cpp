#include <iostream>
#include <string>

using namespace std;

int main()
{

    // -----> Basic I/O <----- \\

    string name;

    cout << "Enter Your Name" << endl;
    getline(cin, name);
    cout << "Your name is: " << name << endl;

    // -----> Data Types <----- \\

    // =====>  integer

    int num;

    cout << "Enter number" << endl;
    cin >> num;
    cout << "You entered: " << num << endl;

    // =====> float

    float roundedNum;

    cout << "Enter floating point number" << endl;
    cin >> roundedNum;
    cout << "You entered: " << roundedNum << endl;

    // =====> char

    char character;

    cout << "Enter character" << endl;
    cin >> character;
    cout << "You entered: " << character << endl;

    // -----> Conditional Statements <----- \\

    int marks;

    cout << "Enter Marks" << endl;
    cin >> marks;

    if (marks <= 28)
    {
        cout << "Grade F" << endl;
    }
    else if (marks >= 28 && marks <= 50)
    {
        cout << "Grade D" << endl;
    }
    else if (marks >= 50 && marks <= 60)
    {
        cout << "Grade C" << endl;
    }
    else if (marks >= 60 && marks <= 70)
    {
        cout << "Grade B" << endl;
    }
    else if (marks >= 70 && marks <= 80)
    {
        cout << "Grade A" << endl;
    }
    else
    {
        cout << "Grade A+" << endl;
    }

    // -----> Patterns <----- \\

    // =====> Square Patterns

    // int num = 5;

    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = 1; j <= num; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // int numToPrint = 9;

    // for (int i = 1; i <= numToPrint; i++)
    // {
    //     if (i % 3 == 0)
    //     {
    //         cout << i << endl;
    //     }
    //     else
    //     {
    //         cout << i << " ";
    //     }
    // }

    // =====>
}
