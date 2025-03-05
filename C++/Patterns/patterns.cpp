#include <iostream>

using namespace std;

void printEqualNumOfStars(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printStairs(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printNumStairs(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{

    // -----> printEqualNumOfStars <----- \\

    // int number;
    // cout << "Enter number to get stars" << endl;
    // cin >> number;
    // printEqualNumOfStars(number);

    // -----> printStairs <----- \\

    // int numOfStairs;
    // cout << "Enter stairs number" << endl;
    // cin >> numOfStairs;
    // printStairs(numOfStairs);

    // -----> printNumStairs <----- \\

    int numberStairs;
    cout << "Enter number for stairs" << endl;
    cin >> numberStairs;
    printNumStairs(numberStairs);

    return 0;
}