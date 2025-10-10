#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec= {1,2,3,4,5};
    
    vec.insert(vec.begin() +2 ,100); //select index and input a value.
    
    for (int val : vec)
    {
        cout << val << " ";
        
    }
    cout << endl;
    return 0;
} 