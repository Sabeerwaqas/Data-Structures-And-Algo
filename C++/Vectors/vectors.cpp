#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<char> vec = {'a', 'b', 'c'};

    for (char val : vec)
    {
        cout << val << endl;
    }

    // -----> Vector Functions <----- \\
    //  size, push_back, pop_back, front, back, at

    vector<int> numVec;

    numVec.push_back(25);

    cout << "numVec Value: " << numVec[0] << endl;

    numVec.push_back(20);
    numVec.push_back(10);
    numVec.push_back(15);

    for (int iter : numVec)
    {
        cout << "iter => " << iter << endl;
    }

    numVec.pop_back();

    cout << "After pop" << endl;

    for (int iter : numVec)
    {
        cout << "iter => " << iter << endl;
    }

    cout << "After inserting at front of vector" << endl;

    numVec.insert(numVec.begin(), 90);
    numVec.insert(numVec.begin(), 91);

    for (int iter : numVec)
    {
        cout << "iter => " << iter << endl;
    }

    cout << "After erasing from front" << endl;

    numVec.erase(numVec.begin());

    for (int iter : numVec)
    {
        cout << "iter => " << iter << endl;
    }

    cout << "Getting first value => " << numVec.front() << endl;
    cout << "Getting last value => " << numVec.back() << endl;

    return 0;
}