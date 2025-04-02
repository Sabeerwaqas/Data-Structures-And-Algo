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

void explainList()
{

    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);
    ls.emplace_front(10);

    for (auto i : ls)
    {
        cout << "list => " << i << endl;
    }
}

void explainDeque()
{
    deque<int> dq;

    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);

    for (auto i : dq)
    {
        cout << "dq => " << i << endl;
    }

    dq.pop_back();
    dq.pop_front();

    for (auto i : dq)
    {
        cout << "dq => " << i << endl;
    }
}

void explainStack()
{
    // -----> LIFO Data Structure <----- \\

    stack<int> st;

    st.push(10);
    st.push(12);
    st.push(14);
    st.emplace(15);

    cout << "st.top =>" << st.top() << endl;
    cout << "st.size =>" << st.size() << endl;
    cout << "st.empty =>" << st.empty() << endl;
}

void explainQueue()
{
    queue<int> q;
    q.push(19);
    q.push(20);
    q.emplace(4);

    q.back() += 5;

    cout << "q.back =>" << q.back() << endl;
    cout << "q.front =>" << q.front() << endl;
    q.pop();
    cout << "q.front =>" << q.front() << endl;
}

void explainPriorityQueue()
{
    // -----> Max Heap <----- \\

    priority_queue<int> pq;

    pq.push(20);
    pq.push(25);
    pq.push(8);
    pq.emplace(10);

    cout << "pq.top =>" << pq.top() << endl;

    pq.pop();

    // -----> Minimum Heap <----- \\

    priority_queue<int, vector<int>, greater<int>> pqueue;

    pqueue.push(1);
    pqueue.push(2);
    pqueue.push(3);

    cout << "pqueue.top =>" << pqueue.top() << endl;
}

void explainSet()
{
    set<int> st;

    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);

    auto it = st.find(1);

    auto i = st.find(6);

    st.erase(2);

    int isExist = st.count(1);

    auto it = st.find(2);
    st.erase(it);

    auto it1 = st.find(1);
    auto it2 = st.find(3);

    st.erase(it1, it2);
}

void explainMultiSet()
{

    // -----> Everything same as set except storing unique values <----- \\

    multiset<int> mltSet;
    mltSet.insert(1);
    mltSet.insert(1);
    mltSet.insert(1);

    mltSet.erase(1);

    int cnt = mltSet.count(1);

    // -----> Only single 1 erase <----- \\

    mltSet.erase(mltSet.find(1));

    // -----> Erase counted 1s <----- \\

}

int main()
{

    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPriorityQueue();
    explainSet();

    return 0;
}