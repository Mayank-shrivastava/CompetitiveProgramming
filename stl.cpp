#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> pr1 = {1, 2}; // one way
    // pair<int, int> pr1 = make_pair(2,3); another ways
    cout << pr1.first << " " << pr1.second << endl;

    pair<int, char> pr2 = make_pair(2, 'b');
    cout << pr2.first << " " << pr2.second << endl;

    pair<pair<int, char>, int> pr3 = {{2, 'a'}, 9};
    cout << pr3.first.second << " " << pr3.second << endl;
}

void explainVector()
{
    vector<int> v1; // empty container
    v1.push_back(1);
    v1.push_back(2);
    v1.emplace_back(0);

    cout << v1.size() << endl;

    // print vector
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    // iterator
    auto beginItr = v1.begin();
    // vector<int>::iterator beginItr = v1.begin(); // reference to the mem address
    //  vector<int>::iterator endItr = v1.end(); // local after
    auto endItr = v1.end();
    for (auto i = beginItr; i < endItr; i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    for (auto i : v1)
    {
        cout << i << " ";
    }
    cout << endl;
    // reverse iterator
    auto reverseBegin = v1.rbegin();
    auto reverseEnd = v1.rend();

    for (auto i = reverseBegin; i < reverseEnd; i++)
    {
        cout << *i << " ";
    }

    vector<int> dupVec(v1.begin()+1, v1.end()-1);
    for (auto i : dupVec) {cout << i << " "; }
}

int main()
{
    return 0;
}