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

void swapMinMax(int arr[], int size)
{

    int minIndex = 0;
    int maxIndex = 0;
    int temp = 0;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
        else if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    temp = arr[minIndex];

    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    cout << "Array after swapping min & max: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printUniqueVal(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            cout << arr[i] << endl;
        }
    }
}

void intersectionOfArrays(int arr1[], int size1, int arr2[], int size2)
{
    cout << "Intersection of 2 arrays:" << endl;

    for (int i = 0; i < size1; i++)

    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << endl;
                break;
            }
        }
    }
}

int main()
{
    // -----> Program to find smallest number in an array <----- \\

    int numsArr[6] = {12, 43, 21, 5, 1, 1};
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

    // -----> Swap min and max <----- \\

    swapMinMax(numsArr, lengthOfArr);

    // -----> Print unique values <----- \\

    printUniqueVal(numsArr, lengthOfArr);

    // -----> Intersection of arrays <----- \\

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 5, 7};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    intersectionOfArrays(arr1, size1, arr2, size2);

    return 0;
}