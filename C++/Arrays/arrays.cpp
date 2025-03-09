#include <iostream>

using namespace std;

void doubleArrayVal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] * 2 << endl;
    }
}

void reverseArray(int array[], int length)
{

    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }

    cout << "After Swapping => " << endl;

    for (int i = 0; i < length; i++)
    {
        cout << array[i] << endl;
    }
}

void sumOfArray(int array[], int size)
{
    int sum = 0;

    for (int i = 0; i < size - 1; i++)
    {
        sum += array[i];
    }

    cout << "Sum of array => " << sum << endl;
}

void productOfArray(int arr[], int size)
{
    int product = 1;

    for (int i = 0; i < size - 1; i++)
    {
        product *= arr[i];
    }

    cout << "Product => " << product << endl;
}

int main()
{
    // -----> Program to find smallest number in an array <----- \\

    int numsArr[5] = {12, 43, 21, 5, 1};
    int lengthOfArr = sizeof(numsArr) / sizeof(numsArr[0]);
    int smallest = numsArr[0];

    for (int i = 0; i < lengthOfArr; i++)
    {
        (smallest > numsArr[i]) ? smallest = numsArr[i] : smallest;
    }

    cout << "smallest => " << smallest << endl;

    // -----> Double Array Value <----- \\

    doubleArrayVal(numsArr, lengthOfArr);

    // -----> Reverse Array <----- \\

    cout << "Before Swapping => " << endl;

    for (int i = 0; i < lengthOfArr; i++)
    {
        cout << numsArr[i] << endl;
    }

    reverseArray(numsArr, lengthOfArr);

    // -----> Some of Array <----- \\

    sumOfArray(numsArr, lengthOfArr);

    // -----> Product of Array <----- \\

    productOfArray(numsArr, lengthOfArr);

    return 0;
}