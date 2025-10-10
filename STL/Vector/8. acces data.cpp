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

    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    
    cout << vec[2] << endl;

    cout << vec.at(3) << endl; //mostly we do not use .at() so much... 

    return 0;
}