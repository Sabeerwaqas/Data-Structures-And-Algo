#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    // -----> Getting size of array <----- \\

    cout << "Enter size of Array: " << endl;
    int number;

    cin >> number;

    // =====> Number Hashing <===== \\

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

    // =====> Character Hashing <===== \\

    string sent;
    cout << "Enter string: " << endl;
    cin >> sent;

    int hashArray[26] = {0};

    for (int i = 0; i < sent.size(); i++)
    {
        hashArray[sent[i] - 'a']++;
    }

    int queryNum;
    cout << "Enter query num: " << endl;
    cin >> queryNum;

    while (queryNum--)
    {
        char c;
        cin >> c;

        cout << hashArray[c - 'a'] << endl;
    }

    // =====> Character Hashing Using Map <===== \\

    string characters;

    cout << "Enter Characters: " << endl;

    cin >> characters;

    map<char, int> charMap;

    for(int i = 0; i < characters.size(); i++){
        charMap[characters[i]]++;
    }

    int queryInt;

    cout << "Enter Query Integer" << endl;

    cin >> queryInt;

    while(queryInt--){
        char character;
        cout << "Enter Character To Test Frequency" << endl;
        cin >> character;
        cout << "Character Frequency ==> " << charMap[character] << endl;
    }

    // ======> Number array using maps <===== \\

    int numInput;

    cout << "Enter number value: " << endl;
    cin >> numInput;

    int arrayElem[number];

    for (int i = 0; i < number; i++)
    {
        cin >> arrayElem[i];
    }

    map<int, int> mapp;

    for (int i = 0; i < numInput; i++)
    {
        mapp[arrayElem[i]]++;
    }

    int queryNumber;

    while (queryNumber--)
    {
        int numberVar;
        cin >> numberVar;
        cout << mapp[numberVar] << endl;
    }

    // =====> Practice Number Input <===== \\

    int numOfInput;

    cout << "Enter number of elements" << endl;

    cin >> numOfInput;

    int arrayElem[numOfInput];

    for(int i = 0; i < numOfInput; i++){
        cout << "Enter Eleme" << endl;
        cin >> arrayElem[i];
    }

    int hashMapArray[13] = {0};

    for(int i = 0; i < numOfInput; i++){
        hashMapArray[arrayElem[i]]++;
    }

    map<int, int> mapArray;
    for(int i = 0; i < numOfInput; i++){
        mapArray[arrayElem[i]]++;
    }

    // Iterate over map

    for(auto it: mapArray){
        cout << it.first << "-> " << it.second << endl;
    }


    int queryNum;

    cout << "Enter number of queries" << endl;

    while(queryNum--){
        int numElem;
        cout << "Enter num to check occurrence" << endl;
        cin >> numElem;
        // cout << "hashMapArray[numElem]" << hashMapArray[numElem] << endl;
        cout << "mapArray" << mapArray[numElem] << endl;
    }

    return 0;
}