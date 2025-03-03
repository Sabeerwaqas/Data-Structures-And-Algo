#include <iostream>
#include <string>

using namespace std;

int main()
{

    // -----> Patterns <----- \\

    // =====> Square Patterns

    int num = 5;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    int numToPrint = 9;

    for (int i = 1; i <= numToPrint; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << endl;
        }
        else
        {
            cout << i << " ";
        }
    }
}
