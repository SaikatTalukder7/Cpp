#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    vec.clear();

    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << vec.capacity() << endl; //even if vector cleared but the capacity still reamain same.
    return 0;
}