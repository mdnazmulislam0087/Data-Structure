#include <bits\stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    // multi space name like Sakib al hasan with enter tamim khan; getline
    // normally cin

    vector <string> v;
    for (int i =0;i<n;i++)
    {
        string s;
        cin >>s;
        v.push_back(s);

    }

    // for(int i = 0; i<v.size(); i++)
    // {
    //     cout << v[i]<< " ";
    // }

    for (string val:v)
    {
        cout << val <<" ";
    }


    return 0;
}