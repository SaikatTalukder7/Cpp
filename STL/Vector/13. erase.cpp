#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec= {1,2,3,4,5};
    
    vec.erase(vec.begin()); //erase the first element.

    vec.erase(vec.begin() +3); //define specific index.
    
    vec.erase(vec.begin()+1, vec.begin()+3); // erase more than one at a time.

    
    for (int val : vec)
    {
        cout << val << " ";
        
    }
    cout << endl;
    return 0;
} 