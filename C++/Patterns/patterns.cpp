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

void printNumStairsOfNum(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void reverseRightAngledTriangle(int num)
{
    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void numRightAngledTriangle(int num)
{
    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void diamondTriangle(int num)
{
    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";  
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";  
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

    // int numberStairs;
    // cout << "Enter number for stairs" << endl;
    // cin >> numberStairs;
    // printNumStairs(numberStairs);

    // -----> printNumStairsOfNum <----- \\ 

    // int numOfStairsOfNum;
    // cout << "Enter num of stairs of num" << endl;
    // cin >> numOfStairsOfNum;
    // printNumStairsOfNum(numOfStairsOfNum);

    // -----> reverseRightAngledTriangle <----- \\

    // int numOftriangle;
    // cout << "Enter num of Triangle" << endl;
    // cin >> numOftriangle;
    // reverseRightAngledTriangle(numOftriangle);

    // -----> numRightAngledTriangle <----- \\

    // int numOfRevTri;
    // cout << "Enter number" << endl;
    // cin >> numOfRevTri;
    // numRightAngledTriangle(5);

    // -----> diamondTriangle <----- \\

    int diamondNum;
    cout << "Enter Number" << endl;
    cin >> diamondNum;
    diamondTriangle(diamondNum);
    return 0;
}