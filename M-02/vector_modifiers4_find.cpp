#include <bits\stdc++.h>

using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 7, 6, 4, 5, 4, 3, 4};

    // vector <int> :: iterator it;
    // it = find(v.begin(), v.end(), 3);
    auto it = find(v.begin(), v.end(), 3);

    cout << *it <<endl;
    if (it != v.end())
    {
        cout << "found the value " << *it << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}