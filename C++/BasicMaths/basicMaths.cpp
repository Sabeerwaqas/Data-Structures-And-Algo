#include <iostream>
#include <cmath>

using namespace std;

int countDigits(int num)
{
    int givenNum = num;
    int count = 0;

    while (givenNum > 0)
    {
        givenNum = givenNum / 10;
        count += 1;
    }

    return count;
}

int reverseNum(int num)
{
    int givenNum = num;
    int reversedNum = 0;

    while (givenNum > 0)
    {
        int lastDigit = givenNum % 10;
        reversedNum = (reversedNum * 10) + lastDigit;
        givenNum = givenNum / 10;
    }

    return reversedNum;
}

bool ifNumPalindrome(int num)
{
    int givenNum = num;
    int reversedNum = 0;

    while (givenNum > 0)
    {
        int lastDigit = givenNum % 10;
        reversedNum = (reversedNum * 10) + lastDigit;
        givenNum = givenNum / 10;
    }

    if (reversedNum == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int HCF(int num1, int num2)
{
    int smallestVal = (num1 <= num2) ? num1 : num2;
    int highestCF = 1;

    for (int i = 1; i < smallestVal; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            highestCF = i;
        }
    }

    return highestCF;
}

bool isArmstrong(int num)
{
    int givenNum = num;
    int sumVal = 0;
    int numLength = to_string(num).length();
    int lastDigit = 0;

    for (int i = 0; i < numLength; i++)
    {
        lastDigit = givenNum % 10;
        sumVal += pow(lastDigit, numLength);
        givenNum = givenNum / 10;
    }

    return (num == sumVal) ? true : false;
}

int main()
{

    // -----> Count Digits <----- \\

    // cout << "Number of digits" << " " << countDigits(245973);
    // cout << "Reverse Num" << " " << reverseNum(245973);
    // cout << "ifNumPalindrome" << " " << ifNumPalindrome(121);
    // cout << "HCF " << HCF(30, 60) << endl;
    cout << "isArmstrong => " << isArmstrong(5432) << endl;

    return 0;
}