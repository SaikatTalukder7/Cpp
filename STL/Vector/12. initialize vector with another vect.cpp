#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec= {1,2,3,4,5};
    vector<int> vec1(vec);

    for (int val : vec1)
    {
        cout << val << " ";
        
    }
    cout << endl;
    return 0;
} 