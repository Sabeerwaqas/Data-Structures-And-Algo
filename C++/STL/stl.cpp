#include <bits/stdc++.h>

using namespace std;

void explainPair()
{

    pair<int, int> p = {1, 2};

    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> pairElem = {1, {2, 4}};

    cout << pairElem.first << " " << pairElem.second.first << " " << pairElem.second.second << endl;

    pair<int, int> arr[] = {{1, 3}, {2, 4}, {3, 5}};

    cout << arr[1].first << endl;
}

void explainVector()
{

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    for (auto i : v)
    {
        cout << "v =>" << i << endl;
    }

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "*(it) =>" << *(it) << endl;
    }

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << "vec => " << vec[i].first << " " << vec[i].second << endl;
    }

    vector<int> vecElem = {10, 20, 30, 40, 60};

    vecElem.erase(vecElem.begin() + 1, vecElem.begin() + 3);

    for (auto i : vecElem)
    {
        cout << "vecElem =>" << i << endl;
    }
}

int main()
{

    explainPair();
    explainVector();
    return 0;
}