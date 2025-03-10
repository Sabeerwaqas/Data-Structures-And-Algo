#include <iostream>
#include <vector>

using namespace std;

// -----> Maximum subarray sum brute force approach <----- \\


int maxSubArray(vector<int> array, int size)
{
    int sum = 0;
    int temp = 0;

    for (int st = 0; st < size; st++)
    {
        for (int end = st; end < size; end++)
        {
            temp = 0;
            for (int i = st; i <= end; i++)
            {
                temp += array[i];
                sum = max(sum, temp);
            }
        }
    }

    return sum;
}

int maxSubArrayByKadanes(vector<int> array, int size)
{
    int sum = 0;
    int temp = 0;

    for (int i = 0; i < size; i++)
    {
        temp += array[i];
        sum = max(sum, temp);
        if (temp < 0)
        {
            temp = 0;
        }
    }

    return sum;
}

int main()
{

    // -----> Maximum subarray sum brute force approach <----- \\

    int size = 5;
    vector<int> numArray = {1, -1, -2, 4, 5};

    cout << maxSubArray(numArray, size) << endl;

    // -----> Maximum sunarray sum using Kadane's algo. <----- \\

    cout << maxSubArrayByKadanes(numArray, size) << endl;

    return 0;
}