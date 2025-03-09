#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Decimal To Binary

string decimalToBinary(int num)
{

    int givenNum = num;
    string bin = "";
    while (givenNum > 0)
    {
        int remainder = givenNum % 2;
        bin.push_back('0' + remainder);
        givenNum /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

int binaryToDecimal(int num)
{
    int givenNum = num;
    int base = 1;
    int decimal = 0;
    while (givenNum > 0)
    {
        int lastDigit = givenNum % 10;
        decimal += lastDigit * base;
        base *= 2;
        givenNum /= 10;
    }

    return decimal;
}

int main()
{

    // -----> Decimal To Binary <----- \\

    cout << "Decimal To Binary: " << decimalToBinary(6) << endl;

    // -----> Binary To Decimal <----- \\

    cout << "Binary To Decimal: " << binaryToDecimal(1100) << endl;

    return 0;
}