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
        int lastDigit = givenNum % 2;
        bin.push_back('0' + lastDigit);
        givenNum /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

int main()
{

    // -----> Decimal To Binary <----- \\

    cout << "Decimal To Binary: " << decimalToBinary(2) << endl;

    return 0;
}