#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vec1.clear();
    for (int val : vec1)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << vec1.empty() << endl;  // if empty then 1 or 0.


    vector<int> vec2 = {1, 2, 3, 4, 5};
    for (int val : vec2)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << vec2.empty() << endl;  // if empty then 1 or 0.
    return 0;
}