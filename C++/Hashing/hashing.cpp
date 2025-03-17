#include <iostream>
using namespace std;

int main()
{


    // -----> Getting size of array <----- \\

    cout << "Enter size of Array: " << endl;
    int number;
    
    cin >> number;

    // -----> Taking input array <----- \\

    int array[number];

    for (int i = 0; i < number; i++)
    {
        cout << "Enter array element: " << endl;
        cin >> array[i];
    }

    // -----> Incrementing numbers <----- \\

    int hash[13] = {0};

    for (int i = 0; i < number; i++)
    {
        hash[array[i]] += 1;
    }

    // -----> Output values <----- \\

    int query;

    cin >> query;

    while (query--)
    {
        int number;

        cout << "Enter number to get occurrence: " << endl;
        
        cin >> number;

        cout << hash[number] << endl;
    }

    return 0;
}