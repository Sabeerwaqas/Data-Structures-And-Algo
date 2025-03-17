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

// -----> pairSum <----- \\

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}

int main()
{

    // -----> Maximum subarray sum brute force approach <----- \\

    int size = 5;
    vector<int> numArray = {1, -1, -2, 4, 5};

    cout << maxSubArray(numArray, size) << endl;

    // -----> Maximum sunarray sum using Kadane's algo. <----- \\

    cout << maxSubArrayByKadanes(numArray, size) << endl;

    // -----> pairSum <----- \\

    vector<int> array = {2, 7, 11, 15};
    int target = 9;

    vector<int> answer = pairSum(array, target);
    cout << "ans[i] " << answer[0] << " " << "ans[j] " << answer[1] << endl;

    return 0;
}