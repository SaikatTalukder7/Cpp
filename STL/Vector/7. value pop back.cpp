#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);

    vec.pop_back();
    
    for(int val : vec)
    {
        vec.pop_back();
        cout<<val<<" ";
    }
    return 0;
}