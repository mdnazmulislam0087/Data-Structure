#include <bits\stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    int old_val, new_val, find_val;
    cin >> old_val >> new_val;
    cin >> find_val;


    replace(v.begin(), v.end(), old_val, new_val);
    for (int x:v)
    {
        cout <<x<<" ";
    }
    cout <<endl;


    auto it = find(v.begin(), v.end(), find_val);
    if (it !=v.end())
    {
        cout << distance(v.begin(), it) <<endl;
    }
    
    int idx=0;
    for (int i =0; i < v.size(); i++)
    {
        if (v[i]== find_val)
        {
            idx+=i;
            break;
        }
    }

    cout << "Looping idx: "<< idx<<endl;



return 0;
}